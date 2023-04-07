//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "AdministratorHome.h"
#include "VirtualClassroomLogin.h"
#include "AdministratorUserAccounts.h"
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
void __fastcall TAdministratorHomeForm::FormClose(TObject *Sender, TCloseAction &Action)

{
     LoginForm->Close();
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::UserAccountMenuLabelClick(TObject *Sender)

{
     AdministratorUserAccountsForm->Show();
     AdministratorHomeForm->Hide();
}
//---------------------------------------------------------------------------

