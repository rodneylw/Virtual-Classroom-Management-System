//---------------------------------------------------------------------------

#ifndef InstructorHomeH
#define InstructorHomeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include "InstructorUIParent.h"
#include <FMX.Layouts.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TInstructorHomeForm : public TInstructorUIParentForm
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
	__fastcall TInstructorHomeForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TInstructorHomeForm *InstructorHomeForm;
//---------------------------------------------------------------------------
#endif
