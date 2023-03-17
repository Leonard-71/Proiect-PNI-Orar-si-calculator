//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Calculator.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
Double entry1,entry2,result;
String operates;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}

void __fastcall TForm2::clickNumeric(TObject *Sender)
{
     TButton *btn=((TButton*)Sender);
	 if(txtResult->Text=="0"){
	  txtResult->Text=btn->Caption;
	 }
	 else
	 {
	  txtResult->Text=txtResult->Text + btn->Caption;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::btnEglClick(TObject *Sender)
{
    // check if the string is not empty
    if (!txtResult->Text.IsEmpty())
    {
		entry2 = 0.0;
		if (TryStrToFloat(txtResult->Text, entry2))
        {
            if (operates == "+")
            {
                result = entry1 + entry2;
                txtResult->Text = FloatToStr(result);
            }
            else if (operates == "-")
            {
                result = entry1 - entry2;
                txtResult->Text = FloatToStr(result);
            }
            else if (operates == "*")
            {
                result = entry1 * entry2;
                txtResult->Text = FloatToStr(result);
            }
            else if (operates == "/")
            {
                if (entry2 != 0)
                {
                    result = entry1 / entry2;
                    txtResult->Text = FloatToStr(result);
                }
                else
                {
					txtResult->Text = "Error: Divide by zero";
                }
            }
        }
		else
        {
			txtResult->Text = "Error: Invalid input";
        }
    }
}




//---------------------------------------------------------------------------


void __fastcall TForm2::clickOperator(TObject *Sender)
{
	TButton *btn=((TButton*) Sender);
	entry1 = txtResult-> Text.ToDouble();
	operates = btn->Caption;
	txtResult->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::btnPlusMinusClick(TObject *Sender)
{
    Double p=(txtResult->Text.ToDouble());
    txtResult->Text= (-1*p);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::btnPctClick(TObject *Sender)
{
	if(! txtResult->Text.Pos(","))
	{
	  txtResult-> Text= txtResult -> Text + ",";
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::btnCClick(TObject *Sender)
{
        txtResult->Text=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::btnCEClick(TObject *Sender)
{
	txtResult->Text="";
	String f,s;
    f=entry1;
	f=entry2;
	f="";
	s="";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::btnDelClick(TObject *Sender)
{
	 int q=txtResult->Text.Length();
	 if(q==1){
		txtResult->Text="0";
	}
  else
  {
	  String d= txtResult->Text.Delete(q,1);
	  txtResult->Text=d;
  }
}
//---------------------------------------------------------------------------

