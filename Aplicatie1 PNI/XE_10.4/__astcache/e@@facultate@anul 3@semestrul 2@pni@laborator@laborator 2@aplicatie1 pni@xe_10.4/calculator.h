//---------------------------------------------------------------------------

#ifndef CalculatorH
#define CalculatorH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TEdit *txtResult;
	TButton *btnDel;
	TButton *btnCE;
	TButton *btnPlusMinus;
	TButton *btn1;
	TButton *btn8;
	TButton *btnC;
	TButton *btn6;
	TButton *btn4;
	TButton *btn7;
	TButton *btn5;
	TButton *btn9;
	TButton *btnMinus;
	TButton *btn2;
	TButton *btn3;
	TButton *btnPlus;
	TButton *btnOri;
	TButton *btn0;
	TButton *btnPct;
	TButton *btnEgl;
	TButton *btnDiv;
	void __fastcall clickNumeric(TObject *Sender);
	void __fastcall btnEglClick(TObject *Sender);
	void __fastcall clickOperator(TObject *Sender);
	void __fastcall btnPlusMinusClick(TObject *Sender);
	void __fastcall btnPctClick(TObject *Sender);
	void __fastcall btnCClick(TObject *Sender);
	void __fastcall btnCEClick(TObject *Sender);
	void __fastcall btnDelClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
