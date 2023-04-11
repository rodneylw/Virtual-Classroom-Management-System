//---------------------------------------------------------------------------

#include <fmx.h>
#include <FMX.Graphics.hpp>
#include <System.UIConsts.hpp>
#include <System.UITypes.hpp>

#pragma hdrstop

#include "AdministratorUserAccounts.h"
#include "AdministratorHome.h"
#include "CustomPanel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)

TAdministratorUserAccountsForm *AdministratorUserAccountsForm;
//---------------------------------------------------------------------------
__fastcall TAdministratorUserAccountsForm::TAdministratorUserAccountsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAdministratorUserAccountsForm::FormClose(TObject *Sender, TCloseAction &Action)

{
    AdministratorHomeForm->Show();
}
//---------------------------------------------------------------------------



void __fastcall TAdministratorUserAccountsForm::FormCreate(TObject *Sender)
{
	Width = 1920;
	Height = 1080;

}
//---------------------------------------------------------------------------




void __fastcall TAdministratorUserAccountsForm::HomeMenuItemRectMouseEnter(TObject *Sender)

{
	HomeMenuItemRect->Fill->Kind = TBrushKind::Solid;
	HomeMenuItemRect->Fill->Color = 0xFFDFE9F1;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::HomeMenuItemRectMouseLeave(TObject *Sender)

{
    HomeMenuItemRect->Fill->Kind = TBrushKind::None;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::HomeMenuItemRectClick(TObject *Sender)

{
	AdministratorHomeForm->Show();
	AdministratorUserAccountsForm->Close();
}
//---------------------------------------------------------------------------

