//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "VirtualClassroomLogin.h"
#include "SuperUserHome.h"
#include "School.h"
#include "Administrator.h"
#include "AdministratorHome.h"
#include "AdministratorUserAccounts.h"
#include "AdministratorManageCourses.h"
#include "AdministratorStudentProgress.h"
#include "Instructor.h"
#include "InstructorHome.h"
#include "InstructorManageClasses.h"
#include "InstructorResources.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TLoginForm *LoginForm;
//---------------------------------------------------------------------------
__fastcall TLoginForm::TLoginForm(TComponent* Owner)
	: TForm(Owner)
{
	  School::GetInstance().LoadUsers();
	  School::GetInstance().LoadCourses();
}
//---------------------------------------------------------------------------


void __fastcall TLoginForm::LoginButtonClick(TObject *Sender)
{
       if(UsernameEdit->Text == "SuperUser") {
            if(PasswordEdit->Text == "HorizonSU") {
            SuperUserHomeForm->Show();
            LoginForm->Hide();
            }
       }



       std::string Email = AnsiString(UsernameEdit->Text).c_str();
       std::string Password = AnsiString(PasswordEdit->Text).c_str();

       const auto& Administrators = School::GetInstance().GetAdministrators();

       for(auto admin = Administrators.begin(); admin != Administrators.end(); ++admin) {
		   if(Email == (*admin)->GetEmail()) {
			   if(Password == (*admin)->GetPassword()) {
					string userID = (*admin)->GetUserID();
					string userName = (*admin)->GetFullName();
					School::GetInstance().LoginUser(userID, userName);
						AdministratorUserAccountsForm->Show();
						AdministratorUserAccountsForm->Hide();
						AdministratorManageCoursesForm->Show();
						AdministratorManageCoursesForm->Hide();
						AdministratorStudentProgressForm->Show();
						AdministratorStudentProgressForm->Hide();
					AdministratorHomeForm->Show();
					LoginForm->Hide();
				} else {
					ShowMessage("Incorrect password for " + String((*admin)->GetEmail().c_str()));
				}
		  }
	   }

}
//---------------------------------------------------------------------------

void __fastcall TLoginForm::FormClose(TObject *Sender, TCloseAction &Action)
{
	School::GetInstance().SaveUsers();
    School::GetInstance().SaveCourses();

	 for (int i = Screen->FormCount - 1; i >= 0; i--)
    {
        Screen->Forms[i]->Close();
	}
}
//---------------------------------------------------------------------------

