object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 442
  ClientWidth = 970
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnCreate = FormCreate
  TextHeight = 15
  object StringGrid1: TStringGrid
    Left = 16
    Top = 48
    Width = 481
    Height = 209
    Color = clActiveCaption
    ColCount = 7
    DefaultColAlignment = taCenter
    FixedCols = 0
    RowCount = 7
    FixedRows = 0
    GradientStartColor = clGray
    TabOrder = 0
  end
  object ComboBox1: TComboBox
    Left = 560
    Top = 48
    Width = 225
    Height = 23
    TabOrder = 1
    OnChange = ComboBox1Change
  end
  object ListBox1: TListBox
    Left = 560
    Top = 88
    Width = 225
    Height = 113
    ItemHeight = 15
    TabOrder = 2
    OnClick = ListBox1Click
  end
  object Button1: TButton
    Left = 592
    Top = 272
    Width = 137
    Height = 49
    Caption = 'Write'
    TabOrder = 3
  end
  object Edit1: TEdit
    Left = 576
    Top = 216
    Width = 185
    Height = 23
    TabOrder = 4
    Text = 'Edit1'
  end
  object Button2: TButton
    Left = 592
    Top = 336
    Width = 137
    Height = 49
    Caption = 'Update'
    TabOrder = 5
    OnClick = Button2Click
  end
end
