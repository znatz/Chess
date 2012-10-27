//---------------------------------------------------------------------------

#ifndef ChessH
#define ChessH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ButtonGroup.hpp>
#include <Vcl.ImgList.hpp>

#include "Pcs.h"
//---------------------------------------------------------------------------
class TFrm : public TForm
{
__published:	// IDE-managed Components
	TButtonGroup *Bgp;
	TButton *BtnClose;
	TImageList *ImgLst;
	void __fastcall BtnCloseClick(TObject *Sender);
	void __fastcall BgpButtonClicked(TObject *Sender, int Index);
private:	// User declarations
public:		// User declarations
	__fastcall TFrm(TComponent* Owner);
	Pcs *ps;
};
//---------------------------------------------------------------------------
extern PACKAGE TFrm *Frm;
//---------------------------------------------------------------------------
#endif
