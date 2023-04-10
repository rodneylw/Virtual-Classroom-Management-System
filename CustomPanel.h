//---------------------------------------------------------------------------

#ifndef CustomPanelH
#define CustomPanelH
//---------------------------------------------------------------------------
#include <fmx.h>

class TCustomPanel : public TPanel
{
	typedef TPanel inherited;
private:
	void __fastcall Paint() override;
public:
	__fastcall TCustomPanel(TComponent* Owner) : TPanel(Owner) { }
};



#endif
