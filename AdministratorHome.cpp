//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "AdministratorHome.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdministratorUserAccounts"
#pragma resource "*.fmx"
TAdministratorHomeForm *AdministratorHomeForm;
//---------------------------------------------------------------------------
__fastcall TAdministratorHomeForm::TAdministratorHomeForm(TComponent* Owner)
	: TAdministratorUserAccountsForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAdministratorHomeForm::HomeMenuItemRectClick(TObject *Sender)
{
    return;
}
//---------------------------------------------------------------------------
