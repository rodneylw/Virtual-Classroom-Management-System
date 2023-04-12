//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "School.h"
#include "VirtualClassroomLogin.h"
#include "AdministratorHome.h"
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
void __fastcall TAdministratorHomeForm::FormCreate(TObject *Sender)
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
void __fastcall TAdministratorHomeForm::HomeMenuItemRectMouseEnter(TObject *Sender)

{
	HomeMenuItemRect->Fill->Kind = TBrushKind::Solid;
	HomeMenuItemRect->Fill->Color = 0xFFDFE9F1;
}
//---------------------------------------------------------------------------
void __fastcall TAdministratorHomeForm::HomeMenuItemRectMouseLeave(TObject *Sender)

{
	HomeMenuItemRect->Fill->Kind = TBrushKind::None;
}
//---------------------------------------------------------------------------
void __fastcall TAdministratorHomeForm::HomeMenuItemRectClick(TObject *Sender)
{
	AdministratorHomeForm->Show();
	if(!AdministratorHomeForm->Visible){
		this->Hide();
	}
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::UserAccountsMenuItemRectMouseEnter(TObject *Sender)

{
	UserAccountsMenuItemRect->Fill->Kind = TBrushKind::Solid;
	UserAccountsMenuItemRect->Fill->Color = 0xFFDFE9F1;
}
//---------------------------------------------------------------------------
void __fastcall TAdministratorHomeForm::UserAccountsMenuItemRectMouseLeave(TObject *Sender)

{
    UserAccountsMenuItemRect->Fill->Kind = TBrushKind::None;
}
//---------------------------------------------------------------------------
void __fastcall TAdministratorHomeForm::UserAccountsMenuItemRectClick(TObject *Sender)

{
	AdministratorUserAccountsForm->Show();
	if(!AdministratorUserAccountsForm->Visible){
		this->Hide();
	}
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::ManageCoursesMenuItemRectMouseEnter(TObject *Sender)

{
	ManageCoursesMenuItemRect->Fill->Kind = TBrushKind::Solid;
	ManageCoursesMenuItemRect->Fill->Color = 0xFFDFE9F1;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::ManageCoursesMenuItemRectMouseLeave(TObject *Sender)

{
	ManageCoursesMenuItemRect->Fill->Kind = TBrushKind::None;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::ManageCoursesMenuItemRectClick(TObject *Sender)

{
	/*AdministratorManageCoursesForm->Show();
	if(!AdministratorManageCoursesForm->Visible){
		this->Hide();
	}       */
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::StudentStatisticsMenuItemRectMouseEnter(TObject *Sender)

{
	StudentStatisticsMenuItemRect->Fill->Kind = TBrushKind::Solid;
	StudentStatisticsMenuItemRect->Fill->Color = 0xFFDFE9F1;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::StudentStatisticsMenuItemRectMouseLeave(TObject *Sender)

{
	StudentStatisticsMenuItemRect->Fill->Kind = TBrushKind::None;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::StudentStatisticsMenuItemRectClick(TObject *Sender)

{
	/*AdministratorStudentStatisticsForm->Show();
	if(!AdministratorStudentStatisticsForm->Visible){
		this->Hide();
	}       */
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::PopupProfileMenuSelectorMouseEnter(TObject *Sender)

{
	if(PopupProfileMenu->Visible == True) {
		return;
	}
	ProfileMenuIndicator->Visible = True;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::PopupProfileMenuSelectorMouseLeave(TObject *Sender)

{
	ProfileMenuIndicator->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::PopupProfileMenuSelectorClick(TObject *Sender)

{
	if(PopupProfileMenu->Visible == true) {
		PopupProfileMenu->Visible = false;
        return;
	}

	PopupProfileMenu->Visible = true;
    ProfileMenuIndicator->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::EditProfilePopupProfileMenuItemSelectorMouseEnter(TObject *Sender)

{
	EditProfilePopupProfileMenuItemSelector->Fill->Kind = TBrushKind::Solid;
	EditProfilePopupProfileMenuItemSelector->Fill->Color = 0xFFDFE9F1;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::EditProfilePopupProfileMenuItemSelectorMouseLeave(TObject *Sender)

{
	EditProfilePopupProfileMenuItemSelector->Fill->Kind = TBrushKind::None;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::EditProfilePopupProfileMenuItemSelectorClick(TObject *Sender)

{
    //No Function yet
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::LogoutPopupProfileMenuItemSelectorMouseEnter(TObject *Sender)

{
	LogoutPopupProfileMenuItemSelector->Fill->Kind = TBrushKind::Solid;
	LogoutPopupProfileMenuItemSelector->Fill->Color = 0xFFDFE9F1;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::LogoutPopupProfileMenuItemSelectorMouseLeave(TObject *Sender)

{
	LogoutPopupProfileMenuItemSelector->Fill->Kind = TBrushKind::None;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::LogoutPopupProfileMenuItemSelectorClick(TObject *Sender)

{
	School::GetInstance().LogoutUser();
	this->Close();
	LoginForm->Show();
}
//---------------------------------------------------------------------------


void __fastcall TAdministratorHomeForm::NotificationIconMouseEnter(TObject *Sender)

{
	NotificationsIndicator->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::NotificationIconMouseLeave(TObject *Sender)

{
	NotificationsIndicator->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::NotificationIconClick(TObject *Sender)
{
    //No Function Yet
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::MessagesIconMouseEnter(TObject *Sender)
{
	MessagesIndicator->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::MessagesIconMouseLeave(TObject *Sender)
{
	MessagesIndicator->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TAdministratorHomeForm::MessagesIconClick(TObject *Sender)
{
    //No Function Yet
}
//---------------------------------------------------------------------------

