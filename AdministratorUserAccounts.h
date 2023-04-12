//---------------------------------------------------------------------------

#ifndef AdministratorUserAccountsH
#define AdministratorUserAccountsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include "AdministratorUIParent.h"
#include <FMX.Layouts.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TAdministratorUserAccountsForm : public TAdministratorUIParentForm
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
	__fastcall TAdministratorUserAccountsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAdministratorUserAccountsForm *AdministratorUserAccountsForm;
//---------------------------------------------------------------------------
#endif
