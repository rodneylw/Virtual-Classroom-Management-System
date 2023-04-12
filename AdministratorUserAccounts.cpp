//---------------------------------------------------------------------------
#include "HelperFunctions.h"
#include <fmx.h>
#include <FMX.Graphics.hpp>
#include <FMX.Effects.hpp>
#include <System.UIConsts.hpp>
#include <System.UITypes.hpp>
#include <vector>

#pragma hdrstop

#include "School.h"
#include "VirtualClassroomLogin.h"
#include "AdministratorUserAccounts.h"
#include "AdministratorHome.h"

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



void __fastcall TAdministratorUserAccountsForm::FormCreate(TObject *Sender)
{
	Left = 0;
    Top = 0;
	Width = Screen->Width;
	Height = Screen->Height;

	TShadowEffect *dropShadow = new TShadowEffect(this);
    dropShadow->Parent = PopupProfileMenuBackground;
	dropShadow->Enabled = true;
	dropShadow->Softness = 0.6f;  // A higher value creates a softer shadow
	dropShadow->Distance = 2.0f;  // A lower value creates a shorter shadow
	dropShadow->Direction = 90.0f; // Set the direction to 90 degrees (downwards)
    dropShadow->ShadowColor = claBlack;
	dropShadow->Opacity = 0.25f;
	dropShadow->SendToBack();

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

void __fastcall TAdministratorUserAccountsForm::UserAccountsMenuItemRectMouseEnter(TObject *Sender)

{
	UserAccountsMenuItemRect->Fill->Kind = TBrushKind::Solid;
	UserAccountsMenuItemRect->Fill->Color = 0xFFDFE9F1;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::UserAccountsMenuItemRectMouseLeave(TObject *Sender)

{
	UserAccountsMenuItemRect->Fill->Kind = TBrushKind::None;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::UserAccountsMenuItemRectClick(TObject *Sender)

{
	AdministratorUserAccountsForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TAdministratorUserAccountsForm::ManageCoursesMenuItemRectMouseEnter(TObject *Sender)

{
	ManageCoursesMenuItemRect->Fill->Kind = TBrushKind::Solid;
	ManageCoursesMenuItemRect->Fill->Color = 0xFFDFE9F1;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::ManageCoursesMenuItemRectMouseLeave(TObject *Sender)

{
	ManageCoursesMenuItemRect->Fill->Kind = TBrushKind::None;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::ManageCoursesMenuItemRectClick(TObject *Sender)

{
	//AdministratorManageCoursesForm->Show();
	AdministratorUserAccountsForm->Close();
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::StudentStatisticsMenuItemRectMouseEnter(TObject *Sender)

{
	StudentStatisticsMenuItemRect->Fill->Kind = TBrushKind::Solid;
	StudentStatisticsMenuItemRect->Fill->Color = 0xFFDFE9F1;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::StudentStatisticsMenuItemRectMouseLeave(TObject *Sender)

{
	StudentStatisticsMenuItemRect->Fill->Kind = TBrushKind::None;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::StudentStatisticsMenuItemRectClick(TObject *Sender)

{
	//AdministratorStudentStatisticsForm->Show();
	AdministratorUserAccountsForm->Close();
}
//---------------------------------------------------------------------------
void __fastcall TAdministratorUserAccountsForm::PopupProfileMenuSelectorClick(TObject *Sender)

{
   if(PopupProfileMenu->Visible == True) {
	PopupProfileMenu->Visible = False;
	return;
   }

   PopupProfileMenu->Visible = True;
   ProfileMenuIndicator->Visible = False;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::PopupProfileMenuSelectorMouseEnter(TObject *Sender)

{
	if(PopupProfileMenu->Visible == True) {
		return;
	}
	ProfileMenuIndicator->Visible = True;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::PopupProfileMenuSelectorMouseLeave(TObject *Sender)

{
	ProfileMenuIndicator->Visible = False;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::LogoutPopupProfileMenuItemSelectorClick(TObject *Sender)

{
	School::GetInstance().LogoutUser();
	this->Close();
	LoginForm->Show();
}
//---------------------------------------------------------------------------


void __fastcall TAdministratorUserAccountsForm::EditProfilePopupProfileMenuSelectorMouseEnter(TObject *Sender)

{
	EditProfilePopupProfileMenuSelector->Fill->Kind = TBrushKind::Solid;
	EditProfilePopupProfileMenuSelector->Fill->Color = 0xFFDFE9F1;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::EditProfilePopupProfileMenuSelectorMouseLeave(TObject *Sender)

{
    EditProfilePopupProfileMenuSelector->Fill->Kind = TBrushKind::None;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::LogoutPopupProfileMenuItemSelectorMouseEnter(TObject *Sender)

{
	LogoutPopupProfileMenuItemSelector->Fill->Kind = TBrushKind::Solid;
	LogoutPopupProfileMenuItemSelector->Fill->Color = 0xFFDFE9F1;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::LogoutPopupProfileMenuItemSelectorMouseLeave(TObject *Sender)

{
    LogoutPopupProfileMenuItemSelector->Fill->Kind = TBrushKind::None;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::NotificationIconMouseEnter(TObject *Sender)

{
	NotificationsIndicator->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::NotificationIconMouseLeave(TObject *Sender)

{
	NotificationsIndicator->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::MessagesIconMouseEnter(TObject *Sender)

{
	MessagesIndicator->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::MessagesIconMouseLeave(TObject *Sender)

{
	MessagesIndicator->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUserAccountsForm::FormClose(TObject *Sender, TCloseAction &Action)

{
	if(School::GetInstance().GetLoggedInUser().empty()) {
		return;
	}
	LoginForm->Close();
}
//---------------------------------------------------------------------------

