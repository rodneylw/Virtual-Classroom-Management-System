//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "AdministratorHome.h"
#include "AdministratorUserAccounts.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdministratorUIParent"
#pragma resource "*.fmx"
TAdministratorUserAccountsForm *AdministratorUserAccountsForm;
//---------------------------------------------------------------------------
__fastcall TAdministratorUserAccountsForm::TAdministratorUserAccountsForm(TComponent* Owner)
	: TAdministratorUIParentForm(Owner)
{
}
//---------------------------------------------------------------------------

