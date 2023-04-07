//---------------------------------------------------------------------------

#ifndef AdministratorManageCoursesH
#define AdministratorManageCoursesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
//---------------------------------------------------------------------------
class TAdministratorManageCoursesForm : public TForm
{
__published:	// IDE-managed Components
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TAdministratorManageCoursesForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAdministratorManageCoursesForm *AdministratorManageCoursesForm;
//---------------------------------------------------------------------------
#endif
