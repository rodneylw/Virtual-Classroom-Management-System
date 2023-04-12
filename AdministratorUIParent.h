//---------------------------------------------------------------------------

#ifndef AdministratorUIParentH
#define AdministratorUIParentH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TAdministratorUIParentForm : public TForm
{
__published:	// IDE-managed Components
	TLayout *Header;
	TRectangle *HeaderBackground;
	TImage *PopupProfileMenu;
	TRectangle *PopupProfileMenuBackground;
	TRectangle *LogoutPopupProfileMenuItemSelector;
	TRectangle *EditProfilePopupProfileMenuItemSelector;
	TImage *EditProfilePopupMenuItemIcon;
	TText *EditProfilePopupProfileMenuItem;
	TText *LogoutProfilePopupMenuItem;
	TImage *LogoutProfilePopupMenuItemIcon;
	TText *HeaderText;
	TImage *ProfileIcon;
	TLine *HorizontalRule;
	TImage *HeaderLogo;
	TLine *Line1;
	TImage *NotificationIcon;
	TImage *MessagesIcon;
	TRectangle *ProfileMenuIndicator;
	TText *ProfileMenuIndicatorText;
	TText *UserNameProfile;
	TRectangle *PopupProfileMenuSelector;
	TRectangle *NotificationsIndicator;
	TText *NotificationsIndicatorText;
	TRectangle *MessagesIndicator;
	TText *MessagesIndicatorText;
	TLayout *MenuBar;
	TRectangle *HomeMenuItemRect;
	TRectangle *StudentStatisticsMenuItemRect;
	TRectangle *ManageCoursesMenuItemRect;
	TRectangle *UserAccountsMenuItemRect;
	TText *HomeMenuItem;
	TImage *UserAccountsMenuItemIcon;
	TText *UserAccountsMenuItem;
	TText *ManageCourseMenuItem;
	TText *StudentStatisticsMenuItem;
	TImage *ManageCoursesMenuItemIcon;
	TImage *StudentStatisticsMenuItemIcon;
	TImage *HomeMenuItemIcon;
	TLayout *Footer;
	TRectangle *FooterBackground;
	TLayout *RightMargin;
	TRectangle *FooterRight;
	TLayout *LeftMargin;
	TRectangle *FooterLeft;
	TLayout *TopMargin;
	TImage *FooterLogoutButton;
	TText *SchoolInfo;
	void __fastcall HomeMenuItemRectMouseEnter(TObject *Sender);
	void __fastcall HomeMenuItemRectMouseLeave(TObject *Sender);
	void __fastcall HomeMenuItemRectClick(TObject *Sender);
	void __fastcall UserAccountsMenuItemRectMouseEnter(TObject *Sender);
	void __fastcall UserAccountsMenuItemRectMouseLeave(TObject *Sender);
	void __fastcall UserAccountsMenuItemRectClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall ManageCoursesMenuItemRectMouseEnter(TObject *Sender);
	void __fastcall ManageCoursesMenuItemRectMouseLeave(TObject *Sender);
	void __fastcall ManageCoursesMenuItemRectClick(TObject *Sender);
	void __fastcall StudentStatisticsMenuItemRectMouseEnter(TObject *Sender);
	void __fastcall StudentStatisticsMenuItemRectMouseLeave(TObject *Sender);
	void __fastcall StudentStatisticsMenuItemRectClick(TObject *Sender);
	void __fastcall PopupProfileMenuSelectorMouseEnter(TObject *Sender);
	void __fastcall PopupProfileMenuSelectorMouseLeave(TObject *Sender);
	void __fastcall PopupProfileMenuSelectorClick(TObject *Sender);
	void __fastcall EditProfilePopupProfileMenuItemSelectorMouseEnter(TObject *Sender);
	void __fastcall EditProfilePopupProfileMenuItemSelectorMouseLeave(TObject *Sender);
	void __fastcall LogoutPopupProfileMenuItemSelectorMouseEnter(TObject *Sender);
	void __fastcall EditProfilePopupProfileMenuItemSelectorClick(TObject *Sender);
	void __fastcall LogoutPopupProfileMenuItemSelectorClick(TObject *Sender);
	void __fastcall LogoutPopupProfileMenuItemSelectorMouseLeave(TObject *Sender);
	void __fastcall NotificationIconMouseEnter(TObject *Sender);
	void __fastcall NotificationIconMouseLeave(TObject *Sender);
	void __fastcall NotificationIconClick(TObject *Sender);
	void __fastcall MessagesIconMouseEnter(TObject *Sender);
	void __fastcall MessagesIconMouseLeave(TObject *Sender);
	void __fastcall MessagesIconClick(TObject *Sender);
	void __fastcall FooterLogoutButtonClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall FormActivate(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TAdministratorUIParentForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAdministratorUIParentForm *AdministratorUIParentForm;
//---------------------------------------------------------------------------
#endif
