//---------------------------------------------------------------------------

#ifndef AdministratorHomeH
#define AdministratorHomeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include "AdministratorUserAccounts.h"
#include <FMX.Layouts.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TAdministratorHomeForm : public TAdministratorUserAccountsForm
{
__published:	// IDE-managed Components
	void __fastcall HomeMenuItemRectClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAdministratorHomeForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAdministratorHomeForm *AdministratorHomeForm;
//---------------------------------------------------------------------------
#endif
