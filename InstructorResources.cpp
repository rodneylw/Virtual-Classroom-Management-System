//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "InstructorResources.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "InstructorUIParent"
#pragma resource "*.fmx"
TInstructorResourcesForm *InstructorResourcesForm;
//---------------------------------------------------------------------------
__fastcall TInstructorResourcesForm::TInstructorResourcesForm(TComponent* Owner)
	: TInstructorUIParentForm(Owner)
{
}
//---------------------------------------------------------------------------
