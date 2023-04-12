//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "School.h"
#include "AdministratorHome.h"
#include "AdministratorUserAccounts.h"
#include "AdministratorManageCourses.h"
#include "AdministratorStudentProgress.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdministratorUIParent"
#pragma resource "*.fmx"
TAdministratorHomeForm *AdministratorHomeForm;
//---------------------------------------------------------------------------
__fastcall TAdministratorHomeForm::TAdministratorHomeForm(TComponent* Owner)
	: TAdministratorUIParentForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TAdministratorHomeForm::FormActivate(TObject *Sender)
{
	UserNameProfile->Text = School::GetInstance().GetLoggedInUserName().c_str();
}
//---------------------------------------------------------------------------


