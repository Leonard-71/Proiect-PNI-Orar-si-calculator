//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitMain.h"
#include "UnitAutor.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormMain *FormMain;
//---------------------------------------------------------------------------
__fastcall TFormMain::TFormMain(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TFormMain::Parasire1Click(TObject *Sender)
{
        if( Application->MessageBox("Sigur doriti parasirea aplicatiei?", "Atentionare!", MB_YESNO + MB_ICONWARNING) == IDYES )
        {
                //FormMain->Close();
                Close();
        }
}
//---------------------------------------------------------------------------


void __fastcall TFormMain::SpeedButton1Click(TObject *Sender)
{
        if( Timer1->Enabled == false )
        {
                RichEdit1->Lines->LoadFromFile( "Lab_PID_2.rtf" );
                SpeedButton1->Caption = "Demo - ON";
        }else
                SpeedButton1->Caption = "Demo - OFF";
        Timer1->Enabled = ! Timer1->Enabled;        
}
//---------------------------------------------------------------------------


void __fastcall TFormMain::Timer1Timer(TObject *Sender)
{
        RichEdit1->ScrollBy( 0, -1 );
}
//---------------------------------------------------------------------------


void __fastcall TFormMain::ComboBox1Change(TObject *Sender)
{
        //La schimbarea unui item din lista...
        ListBox1->Items->Clear();
        switch( ComboBox1->ItemIndex )
        {
                case 2: ListBox1->Items->Add( "Item 3" );
                case 1: ListBox1->Items->Add( "Item 2" );
                case 0: ListBox1->Items->Add( "Item 1" );
                        break;
                case 3: ListBox1->Items->Add( ".........." );
                        break;
                case 4: ListBox1->Items->Add( "Item 4" );
                        break;
        }
}
//---------------------------------------------------------------------------



void __fastcall TFormMain::Nou1Click(TObject *Sender)
{
        //Nou
}
//---------------------------------------------------------------------------



void __fastcall TFormMain::Setari1Click(TObject *Sender)
{
        //Setari        
}
//---------------------------------------------------------------------------


void __fastcall TFormMain::Autor1Click(TObject *Sender)
{
        //Desprea Autor
        //FormAutor->Show();
        FormAutor->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TFormMain::Aplicatie1Click(TObject *Sender)
{
        //Despre Aplicatie        
}
//---------------------------------------------------------------------------



