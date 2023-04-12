//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "AdministratorHome.h"
#include "VirtualClassroomLogin.h"
#include "AdministratorUserAccounts.h"
#include "AdministratorManageCourses.h"
#include "AdministratorStudentProgress.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TAdministratorHomeForm *AdministratorHomeForm;
//---------------------------------------------------------------------------
__fastcall TAdministratorHomeForm::TAdministratorHomeForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::UserAccountsMenuItemClick(TObject *Sender)

{
     AdministratorUserAccountsForm->Show();
     AdministratorHomeForm->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::UserAccountsMenuItemMouseEnter(TObject *Sender)

{
    TFontStyles fontStyle = UserAccountsMenuItem->Font->Style;
    fontStyle = fontStyle << TFontStyle::fsUnderline;
    UserAccountsMenuItem->Font->Style = fontStyle;

    UserAccountsMenuItem->TextSettings->FontColor = TAlphaColorRec::Blue;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::UserAccountsMenuItemMouseLeave(TObject *Sender)

{
    TFontStyles fontStyle = UserAccountsMenuItem->Font->Style;
    fontStyle = fontStyle >> TFontStyle::fsUnderline;
    UserAccountsMenuItem->Font->Style = fontStyle;

    UserAccountsMenuItem->TextSettings->FontColor = TAlphaColorRec::Black;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::ManageCoursesMenuItemClick(TObject *Sender)

{
     AdministratorManageCoursesForm->Show();
     AdministratorHomeForm->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::ManageCoursesMenuItemMouseEnter(TObject *Sender)

{
    TFontStyles fontStyle = ManageCoursesMenuItem->Font->Style;
    fontStyle = fontStyle << TFontStyle::fsUnderline;
    ManageCoursesMenuItem->Font->Style = fontStyle;

    ManageCoursesMenuItem->TextSettings->FontColor = TAlphaColorRec::Blue;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::ManageCoursesMenuItemMouseLeave(TObject *Sender)

{
    TFontStyles fontStyle = ManageCoursesMenuItem->Font->Style;
    fontStyle = fontStyle >> TFontStyle::fsUnderline;
    ManageCoursesMenuItem->Font->Style = fontStyle;

    ManageCoursesMenuItem->TextSettings->FontColor = TAlphaColorRec::Black;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::StudentProgressMenuItemClick(TObject *Sender)

{
     AdministratorStudentProgressForm->Show();
     AdministratorHomeForm->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::StudentProgressMenuItemMouseEnter(TObject *Sender)

{
    TFontStyles fontStyle = StudentProgressMenuItem->Font->Style;
    fontStyle = fontStyle << TFontStyle::fsUnderline;
    StudentProgressMenuItem->Font->Style = fontStyle;

    StudentProgressMenuItem->TextSettings->FontColor = TAlphaColorRec::Blue;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::StudentProgressMenuItemMouseLeave(TObject *Sender)

{
    TFontStyles fontStyle = StudentProgressMenuItem->Font->Style;
    fontStyle = fontStyle >> TFontStyle::fsUnderline;
    StudentProgressMenuItem->Font->Style = fontStyle;

    StudentProgressMenuItem->TextSettings->FontColor = TAlphaColorRec::Black;
}
//---------------------------------------------------------------------------
