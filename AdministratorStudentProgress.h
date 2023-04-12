//---------------------------------------------------------------------------

#ifndef AdministratorStudentProgressH
#define AdministratorStudentProgressH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include "AdministratorUIParent.h"
#include <FMX.Layouts.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TAdministratorStudentProgressForm : public TAdministratorUIParentForm
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
	__fastcall TAdministratorStudentProgressForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAdministratorStudentProgressForm *AdministratorStudentProgressForm;
//---------------------------------------------------------------------------
#endif
