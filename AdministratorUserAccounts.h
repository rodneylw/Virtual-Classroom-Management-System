//---------------------------------------------------------------------------

#ifndef AdministratorUserAccountsH
#define AdministratorUserAccountsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
//---------------------------------------------------------------------------
class TAdministratorUserAccountsForm : public TForm
{
__published:	// IDE-managed Components
	TRectangle *FooterBar;
	TText *HeaderText;
	TImage *HeaderDivider;
	TImage *HeaderLogo;
	TLayout *Header;
	TLayout *MenuBar;
	TLayout *Footer;
	TImage *HomeMenuItemIcon;
	TText *HomeMenuItem;
	TImage *UserAccountsMenuItemIcon;
	TText *UserAccountsMenuItem;
	TRectangle *HomeMenuItemRect;
	TRectangle *UserAccountsMenuItemRect;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall HomeMenuItemRectMouseEnter(TObject *Sender);
	void __fastcall HomeMenuItemRectMouseLeave(TObject *Sender);
	void __fastcall HomeMenuItemRectClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAdministratorUserAccountsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAdministratorUserAccountsForm *AdministratorUserAccountsForm;
//---------------------------------------------------------------------------
#endif
