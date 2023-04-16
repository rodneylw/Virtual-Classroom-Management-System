//---------------------------------------------------------------------------

#include <fmx.h>
//#include <FMX.Dialogs.hpp>
#pragma hdrstop

#include "School.h"
#include "VirtualClassroomLogin.h"
#include "AdministratorUIParent.h"
#include "AdministratorHome.h"
#include "AdministratorUserAccounts.h"
#include "AdministratorManageCourses.h"
#include "AdministratorStudentProgress.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TAdministratorUIParentForm *AdministratorUIParentForm;
//---------------------------------------------------------------------------
__fastcall TAdministratorUIParentForm::TAdministratorUIParentForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAdministratorUIParentForm::FormCreate(TObject *Sender)
{
	Left = 0;
	Top = 0;
	Width = ((Screen->Width)-50);
	Height = ((Screen->Height)-50);

	TShadowEffect *PopupProfileMenuShadow = new TShadowEffect(this);
	PopupProfileMenuShadow->Parent = PopupProfileMenuBackground;
	PopupProfileMenuShadow->Enabled = true;
	PopupProfileMenuShadow->Softness = 0.6f;  // A higher value creates a softer shadow
	PopupProfileMenuShadow->Distance = 2.0f;  // A lower value creates a shorter shadow
	PopupProfileMenuShadow->Direction = 90.0f; // Set the direction to 90 degrees (downwards)
	PopupProfileMenuShadow->ShadowColor = claBlack;
	PopupProfileMenuShadow->Opacity = 0.25f;
	PopupProfileMenuShadow->SendToBack();
}
//---------------------------------------------------------------------------
void __fastcall TAdministratorUIParentForm::HomeMenuItemRectMouseEnter(TObject *Sender)

{
	HomeMenuItemRect->Fill->Kind = TBrushKind::Solid;
	HomeMenuItemRect->Fill->Color = 0xFFDFE9F1;
}
//---------------------------------------------------------------------------
void __fastcall TAdministratorUIParentForm::HomeMenuItemRectMouseLeave(TObject *Sender)

{
	HomeMenuItemRect->Fill->Kind = TBrushKind::None;
}
//---------------------------------------------------------------------------
void __fastcall TAdministratorUIParentForm::HomeMenuItemRectClick(TObject *Sender)
{
	if(AdministratorHomeForm->Visible == true){
		return;
	}
	AdministratorHomeForm->Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::UserAccountsMenuItemRectMouseEnter(TObject *Sender)

{
	UserAccountsMenuItemRect->Fill->Kind = TBrushKind::Solid;
	UserAccountsMenuItemRect->Fill->Color = 0xFFDFE9F1;
}
//---------------------------------------------------------------------------
void __fastcall TAdministratorUIParentForm::UserAccountsMenuItemRectMouseLeave(TObject *Sender)

{
    UserAccountsMenuItemRect->Fill->Kind = TBrushKind::None;
}
//---------------------------------------------------------------------------
void __fastcall TAdministratorUIParentForm::UserAccountsMenuItemRectClick(TObject *Sender)

{
	if(AdministratorUserAccountsForm->Visible == true){
		return;
	}
	AdministratorUserAccountsForm->Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::ManageCoursesMenuItemRectMouseEnter(TObject *Sender)

{
	ManageCoursesMenuItemRect->Fill->Kind = TBrushKind::Solid;
	ManageCoursesMenuItemRect->Fill->Color = 0xFFDFE9F1;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::ManageCoursesMenuItemRectMouseLeave(TObject *Sender)

{
	ManageCoursesMenuItemRect->Fill->Kind = TBrushKind::None;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::ManageCoursesMenuItemRectClick(TObject *Sender)

{
	if(AdministratorManageCoursesForm->Visible == true){
		return;
	}
	AdministratorManageCoursesForm->Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::StudentStatisticsMenuItemRectMouseEnter(TObject *Sender)

{
	StudentStatisticsMenuItemRect->Fill->Kind = TBrushKind::Solid;
	StudentStatisticsMenuItemRect->Fill->Color = 0xFFDFE9F1;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::StudentStatisticsMenuItemRectMouseLeave(TObject *Sender)

{
	StudentStatisticsMenuItemRect->Fill->Kind = TBrushKind::None;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::StudentStatisticsMenuItemRectClick(TObject *Sender)

{
	if(AdministratorStudentProgressForm->Visible == true){
		return;
	}
	AdministratorStudentProgressForm->Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::PopupProfileMenuSelectorMouseEnter(TObject *Sender)

{
	if(PopupProfileMenu->Visible == True) {
		return;
	}
	ProfileMenuIndicator->Visible = True;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::PopupProfileMenuSelectorMouseLeave(TObject *Sender)

{
	ProfileMenuIndicator->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::PopupProfileMenuSelectorClick(TObject *Sender)

{
	if(PopupProfileMenu->Visible == true) {
		PopupProfileMenu->Visible = false;
        return;
	}

	PopupProfileMenu->Visible = true;
	ProfileMenuIndicator->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::EditProfilePopupProfileMenuItemSelectorMouseEnter(TObject *Sender)

{
	EditProfilePopupProfileMenuItemSelector->Fill->Kind = TBrushKind::Solid;
	EditProfilePopupProfileMenuItemSelector->Fill->Color = 0xFFDFE9F1;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::EditProfilePopupProfileMenuItemSelectorMouseLeave(TObject *Sender)

{
	EditProfilePopupProfileMenuItemSelector->Fill->Kind = TBrushKind::None;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::EditProfilePopupProfileMenuItemSelectorClick(TObject *Sender)

{
    PopupProfileMenu->Visible = false;
    //No Function yet
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::LogoutPopupProfileMenuItemSelectorMouseEnter(TObject *Sender)

{
	LogoutPopupProfileMenuItemSelector->Fill->Kind = TBrushKind::Solid;
	LogoutPopupProfileMenuItemSelector->Fill->Color = 0xFFDFE9F1;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::LogoutPopupProfileMenuItemSelectorMouseLeave(TObject *Sender)

{
	LogoutPopupProfileMenuItemSelector->Fill->Kind = TBrushKind::None;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::LogoutPopupProfileMenuItemSelectorClick(TObject *Sender)

{
	PopupProfileMenu->Visible = false;

	UnicodeString msg = "Are you sure you want to logout?";
	TMsgDlgButtons buttons = TMsgDlgButtons() << TMsgDlgBtn::mbYes << TMsgDlgBtn::mbNo;
	TMsgDlgType dlgType = TMsgDlgType::mtConfirmation;

	if (MessageDlg(msg, dlgType, buttons, 0) == mrYes) {
		School::GetInstance().LogoutUser();
		this->Close();
		LoginForm->Show();
	}
}
//---------------------------------------------------------------------------


void __fastcall TAdministratorUIParentForm::NotificationIconMouseEnter(TObject *Sender)

{
	NotificationsIndicator->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::NotificationIconMouseLeave(TObject *Sender)

{
	NotificationsIndicator->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::NotificationIconClick(TObject *Sender)
{
    //No Function Yet
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::MessagesIconMouseEnter(TObject *Sender)
{
	MessagesIndicator->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::MessagesIconMouseLeave(TObject *Sender)
{
	MessagesIndicator->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::MessagesIconClick(TObject *Sender)
{
    //No Function Yet
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::FooterLogoutButtonClick(TObject *Sender)
{
    UnicodeString msg = "Are you sure you want to logout?";
	TMsgDlgButtons buttons = TMsgDlgButtons() << TMsgDlgBtn::mbYes << TMsgDlgBtn::mbNo;
	TMsgDlgType dlgType = TMsgDlgType::mtConfirmation;

	if (MessageDlg(msg, dlgType, buttons, 0) == mrYes) {
		School::GetInstance().LogoutUser();
		this->Close();
		LoginForm->Show();
	}
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::FormClose(TObject *Sender, TCloseAction &Action)

{
	if(School::GetInstance().GetLoggedInUserID().empty()) {
		return;
	}
	LoginForm->Close();
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorUIParentForm::FormActivate(TObject *Sender)
{
	UserNameProfile->Text = School::GetInstance().GetLoggedInUserName().c_str();
}
//---------------------------------------------------------------------------


