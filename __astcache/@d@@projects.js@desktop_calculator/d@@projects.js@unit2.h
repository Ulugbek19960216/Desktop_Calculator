

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TButton *btnClear;
	TButton *btnPlusMinus;
	TButton *btnSeven;
	TButton *btnEight;
	TButton *btnNine;
	TButton *btnMultiply;
	TButton *btnFour;
	TButton *btnFive;
	TButton *btnSix;
	TButton *btnAdd;
	TButton *btnOne;
	TButton *btnTwo;
	TButton *btnThree;
	TButton *btnSub;
	TButton *btnZero;
	TButton *btnDot;
	TButton *btnEquall;
	TButton *btnBackSpace;
	TButton *btnDiv;
	TButton *btnClearEntry;
	TEdit *txtResult;
	void __fastcall ClickNumeric(TObject *Sender);
	void __fastcall ClickOperatorFunction(TObject *Sender);
	void __fastcall btnEqualsClickFunction(TObject *Sender);
	void __fastcall btnDotClick(TObject *Sender);
	void __fastcall btnBackSpaceClick(TObject *Sender);
	void __fastcall btnClearEntryClick(TObject *Sender);
	void __fastcall btnClearClick(TObject *Sender);
	void __fastcall btnPlusMinusFunction(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
