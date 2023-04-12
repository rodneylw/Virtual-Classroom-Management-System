//---------------------------------------------------------------------------

#ifndef InstructorManageClassesH
#define InstructorManageClassesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include "InstructorUIParent.h"
#include <FMX.Layouts.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TInstructorManageClassesForm : public TInstructorUIParentForm
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
	__fastcall TInstructorManageClassesForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TInstructorManageClassesForm *InstructorManageClassesForm;
//---------------------------------------------------------------------------
#endif
