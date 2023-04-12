//---------------------------------------------------------------------------

#ifndef AdministratorManageCoursesH
#define AdministratorManageCoursesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include "AdministratorHome.h"
#include <FMX.Layouts.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TAdministratorManageCoursesForm : public TAdministratorHomeForm
{
__published:	// IDE-managed Components
	void __fastcall HomeMenuItemRectClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAdministratorManageCoursesForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAdministratorManageCoursesForm *AdministratorManageCoursesForm;
//---------------------------------------------------------------------------
#endif
