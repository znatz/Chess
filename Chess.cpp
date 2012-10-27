//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Chess.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

void Init_Game();

TFrm *Frm;
//---------------------------------------------------------------------------
__fastcall TFrm::TFrm(TComponent* Owner)
	: TForm(Owner)
{
	Init_Game();
}
//---------------------------------------------------------------------------
void __fastcall TFrm::BtnCloseClick(TObject *Sender)
{
	Frm->Close();
}
//---------------------------------------------------------------------------
void __fastcall TFrm::BgpButtonClicked(TObject *Sender, int Index)
{
	if ( ps[Index-1].Clicked == 0 || ps[Index-1].Clicked == 2 ) 
	{
		Bgp->Items->Items[Index]->ImageIndex = 0; 	// 0 is black
		ps[Index-1].Clicked = 1;
	}
	else if (ps[Index-1].Clicked = 1)
	{
		Bgp->Items->Items[Index]->ImageIndex = 1;
		ps[Index-1].Clicked = 2;			 
	}
}
//---------------------------------------------------------------------------


void Init_Game()
{
	Frm->ps	= new Pcs[144];
}