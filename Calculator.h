#pragma once

// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include "Header1.h"
#include "Header2.h"

namespace CppCLRWinFormsProject {

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;

  /// <summary>
  /// Summary for Form1
  /// </summary>
  public ref class Form1 : public System::Windows::Forms::Form
  {
  public:
    Form1(void)
    {
      InitializeComponent();
      //
      //TODO: Add the constructor code here
      //

      // uncomment to execute the rk1-utils:
      //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used

    }

  protected:
    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
    ~Form1()
    {
      if (components)
      {
        delete components;
      }
    }
  private: System::Windows::Forms::Label^ display;
  protected:

  private: System::Windows::Forms::Button^ one;

  private: System::Windows::Forms::Button^ three;
  private: System::Windows::Forms::Button^ two;


  private: System::Windows::Forms::Button^ four;

  private: System::Windows::Forms::Button^ eight;
  private: System::Windows::Forms::Button^ six;


  private: System::Windows::Forms::Button^ seven;
  private: System::Windows::Forms::Button^ five;


  private: System::Windows::Forms::Button^ equals;
  private: System::Windows::Forms::Button^ zero;


  private: System::Windows::Forms::Button^ clear;
  private: System::Windows::Forms::Button^ nine;


  private: System::Windows::Forms::Button^ division;
  private: System::Windows::Forms::Button^ subtraction;


  private: System::Windows::Forms::Button^ multiplication;
  private: System::Windows::Forms::Button^ addition;


  protected:





  protected:

  private:
    /// <summary>
    /// Required designer variable.
    /// </summary>
    System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    void InitializeComponent(void)
    {
        this->display = (gcnew System::Windows::Forms::Label());
        this->one = (gcnew System::Windows::Forms::Button());
        this->three = (gcnew System::Windows::Forms::Button());
        this->two = (gcnew System::Windows::Forms::Button());
        this->four = (gcnew System::Windows::Forms::Button());
        this->eight = (gcnew System::Windows::Forms::Button());
        this->six = (gcnew System::Windows::Forms::Button());
        this->seven = (gcnew System::Windows::Forms::Button());
        this->five = (gcnew System::Windows::Forms::Button());
        this->equals = (gcnew System::Windows::Forms::Button());
        this->zero = (gcnew System::Windows::Forms::Button());
        this->clear = (gcnew System::Windows::Forms::Button());
        this->nine = (gcnew System::Windows::Forms::Button());
        this->division = (gcnew System::Windows::Forms::Button());
        this->subtraction = (gcnew System::Windows::Forms::Button());
        this->multiplication = (gcnew System::Windows::Forms::Button());
        this->addition = (gcnew System::Windows::Forms::Button());
        this->SuspendLayout();
        // 
        // display
        // 
        this->display->BackColor = System::Drawing::Color::White;
        this->display->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
        this->display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->display->Location = System::Drawing::Point(34, 33);
        this->display->Name = L"display";
        this->display->Size = System::Drawing::Size(363, 52);
        this->display->TabIndex = 0;
        this->display->Text = L"0";
        this->display->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
        // 
        // one
        // 
        this->one->BackColor = System::Drawing::SystemColors::ButtonFace;
        this->one->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->one->Location = System::Drawing::Point(34, 114);
        this->one->Name = L"one";
        this->one->Size = System::Drawing::Size(83, 77);
        this->one->TabIndex = 1;
        this->one->Text = L"1";
        this->one->UseVisualStyleBackColor = false;
        this->one->Click += gcnew System::EventHandler(this, &Form1::one_Click);
        // 
        // three
        // 
        this->three->BackColor = System::Drawing::SystemColors::ButtonFace;
        this->three->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->three->Location = System::Drawing::Point(220, 114);
        this->three->Name = L"three";
        this->three->Size = System::Drawing::Size(83, 77);
        this->three->TabIndex = 2;
        this->three->Text = L"3";
        this->three->UseVisualStyleBackColor = false;
        this->three->Click += gcnew System::EventHandler(this, &Form1::three_Click);
        // 
        // two
        // 
        this->two->BackColor = System::Drawing::SystemColors::ButtonFace;
        this->two->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->two->Location = System::Drawing::Point(128, 114);
        this->two->Name = L"two";
        this->two->Size = System::Drawing::Size(83, 77);
        this->two->TabIndex = 3;
        this->two->Text = L"2";
        this->two->UseVisualStyleBackColor = false;
        this->two->Click += gcnew System::EventHandler(this, &Form1::two_Click);
        // 
        // four
        // 
        this->four->BackColor = System::Drawing::SystemColors::ButtonFace;
        this->four->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->four->Location = System::Drawing::Point(314, 114);
        this->four->Name = L"four";
        this->four->Size = System::Drawing::Size(83, 77);
        this->four->TabIndex = 4;
        this->four->Text = L"4";
        this->four->UseVisualStyleBackColor = false;
        this->four->Click += gcnew System::EventHandler(this, &Form1::four_Click);
        // 
        // eight
        // 
        this->eight->BackColor = System::Drawing::SystemColors::ButtonFace;
        this->eight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->eight->Location = System::Drawing::Point(314, 197);
        this->eight->Name = L"eight";
        this->eight->Size = System::Drawing::Size(83, 77);
        this->eight->TabIndex = 8;
        this->eight->Text = L"8";
        this->eight->UseVisualStyleBackColor = false;
        this->eight->Click += gcnew System::EventHandler(this, &Form1::eight_Click);
        // 
        // six
        // 
        this->six->BackColor = System::Drawing::SystemColors::ButtonFace;
        this->six->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->six->Location = System::Drawing::Point(128, 197);
        this->six->Name = L"six";
        this->six->Size = System::Drawing::Size(83, 77);
        this->six->TabIndex = 7;
        this->six->Text = L"6";
        this->six->UseVisualStyleBackColor = false;
        this->six->Click += gcnew System::EventHandler(this, &Form1::six_Click);
        // 
        // seven
        // 
        this->seven->BackColor = System::Drawing::SystemColors::ButtonFace;
        this->seven->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->seven->Location = System::Drawing::Point(220, 197);
        this->seven->Name = L"seven";
        this->seven->Size = System::Drawing::Size(83, 77);
        this->seven->TabIndex = 6;
        this->seven->Text = L"7";
        this->seven->UseVisualStyleBackColor = false;
        this->seven->Click += gcnew System::EventHandler(this, &Form1::seven_Click);
        // 
        // five
        // 
        this->five->BackColor = System::Drawing::SystemColors::ButtonFace;
        this->five->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->five->Location = System::Drawing::Point(34, 197);
        this->five->Name = L"five";
        this->five->Size = System::Drawing::Size(83, 77);
        this->five->TabIndex = 5;
        this->five->Text = L"5";
        this->five->UseVisualStyleBackColor = false;
        this->five->Click += gcnew System::EventHandler(this, &Form1::five_Click);
        // 
        // equals
        // 
        this->equals->BackColor = System::Drawing::SystemColors::ButtonFace;
        this->equals->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->equals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->equals->Location = System::Drawing::Point(314, 280);
        this->equals->Name = L"equals";
        this->equals->Size = System::Drawing::Size(83, 77);
        this->equals->TabIndex = 12;
        this->equals->Text = L"=";
        this->equals->UseVisualStyleBackColor = false;
        this->equals->Click += gcnew System::EventHandler(this, &Form1::equals_Click);
        // 
        // zero
        // 
        this->zero->BackColor = System::Drawing::SystemColors::ButtonFace;
        this->zero->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->zero->Location = System::Drawing::Point(128, 280);
        this->zero->Name = L"zero";
        this->zero->Size = System::Drawing::Size(83, 77);
        this->zero->TabIndex = 11;
        this->zero->Text = L"0";
        this->zero->UseVisualStyleBackColor = false;
        this->zero->Click += gcnew System::EventHandler(this, &Form1::zero_Click);
        // 
        // clear
        // 
        this->clear->BackColor = System::Drawing::SystemColors::ButtonFace;
        this->clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->clear->Location = System::Drawing::Point(220, 280);
        this->clear->Name = L"clear";
        this->clear->Size = System::Drawing::Size(83, 77);
        this->clear->TabIndex = 10;
        this->clear->Text = L"C";
        this->clear->UseVisualStyleBackColor = false;
        this->clear->Click += gcnew System::EventHandler(this, &Form1::clear_Click);
        // 
        // nine
        // 
        this->nine->BackColor = System::Drawing::SystemColors::ButtonFace;
        this->nine->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->nine->Location = System::Drawing::Point(34, 280);
        this->nine->Name = L"nine";
        this->nine->Size = System::Drawing::Size(83, 77);
        this->nine->TabIndex = 9;
        this->nine->Text = L"9";
        this->nine->UseVisualStyleBackColor = false;
        this->nine->Click += gcnew System::EventHandler(this, &Form1::nine_Click);
        // 
        // division
        // 
        this->division->BackColor = System::Drawing::SystemColors::ButtonFace;
        this->division->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->division->Location = System::Drawing::Point(314, 363);
        this->division->Name = L"division";
        this->division->Size = System::Drawing::Size(83, 77);
        this->division->TabIndex = 16;
        this->division->Text = L"÷";
        this->division->UseVisualStyleBackColor = false;
        this->division->Click += gcnew System::EventHandler(this, &Form1::division_Click);
        // 
        // subtraction
        // 
        this->subtraction->BackColor = System::Drawing::SystemColors::ButtonFace;
        this->subtraction->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->subtraction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->subtraction->Location = System::Drawing::Point(128, 363);
        this->subtraction->Name = L"subtraction";
        this->subtraction->Size = System::Drawing::Size(83, 77);
        this->subtraction->TabIndex = 15;
        this->subtraction->Text = L"-";
        this->subtraction->UseVisualStyleBackColor = false;
        this->subtraction->Click += gcnew System::EventHandler(this, &Form1::subtraction_Click);
        // 
        // multiplication
        // 
        this->multiplication->BackColor = System::Drawing::SystemColors::ButtonFace;
        this->multiplication->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->multiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->multiplication->Location = System::Drawing::Point(220, 363);
        this->multiplication->Name = L"multiplication";
        this->multiplication->Size = System::Drawing::Size(83, 77);
        this->multiplication->TabIndex = 14;
        this->multiplication->Text = L"x";
        this->multiplication->UseVisualStyleBackColor = false;
        this->multiplication->Click += gcnew System::EventHandler(this, &Form1::multiplication_Click);
        // 
        // addition
        // 
        this->addition->BackColor = System::Drawing::SystemColors::ButtonFace;
        this->addition->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->addition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->addition->Location = System::Drawing::Point(34, 363);
        this->addition->Name = L"addition";
        this->addition->Size = System::Drawing::Size(83, 77);
        this->addition->TabIndex = 13;
        this->addition->Text = L"+";
        this->addition->UseVisualStyleBackColor = false;
        this->addition->Click += gcnew System::EventHandler(this, &Form1::addition_Click);
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(437, 453);
        this->Controls->Add(this->division);
        this->Controls->Add(this->subtraction);
        this->Controls->Add(this->multiplication);
        this->Controls->Add(this->addition);
        this->Controls->Add(this->equals);
        this->Controls->Add(this->zero);
        this->Controls->Add(this->clear);
        this->Controls->Add(this->nine);
        this->Controls->Add(this->eight);
        this->Controls->Add(this->six);
        this->Controls->Add(this->seven);
        this->Controls->Add(this->five);
        this->Controls->Add(this->four);
        this->Controls->Add(this->two);
        this->Controls->Add(this->three);
        this->Controls->Add(this->one);
        this->Controls->Add(this->display);
        this->Margin = System::Windows::Forms::Padding(4);
        this->Name = L"Form1";
        this->Text = L"C++ Calculator";
        this->ResumeLayout(false);

    }
#pragma endregion

         int firstNum;
         int secondNum;
         int result;
         char operation;


  private: System::Void one_Click(System::Object^ sender, System::EventArgs^ e) {
      if (display->Text == "0") {
          display->Text = "1";
      }
      else {
          display->Text = Convert::ToInt32(display->Text) + "1";
      }
  }
private: System::Void two_Click(System::Object^ sender, System::EventArgs^ e) {
    if (display->Text == "0") {
        display->Text = "2";
    }
    else {
        display->Text = Convert::ToInt32(display->Text) + "2";
    }
}
private: System::Void three_Click(System::Object^ sender, System::EventArgs^ e) {
    if (display->Text == "0") {
        display->Text = "3";
    }
    else {
        display->Text = Convert::ToInt32(display->Text) + "3";
    }
}
private: System::Void four_Click(System::Object^ sender, System::EventArgs^ e) {
    if (display->Text == "0") {
        display->Text = "4";
    }
    else {
        display->Text = Convert::ToInt32(display->Text) + "4";
    }
}
private: System::Void five_Click(System::Object^ sender, System::EventArgs^ e) {
    if (display->Text == "0") {
        display->Text = "5";
    }
    else {
        display->Text = Convert::ToInt32(display->Text) + "5";
    }
}
private: System::Void six_Click(System::Object^ sender, System::EventArgs^ e) {
    if (display->Text == "0") {
        display->Text = "6";
    }
    else {
        display->Text = Convert::ToInt32(display->Text) + "6";
    }
}
private: System::Void seven_Click(System::Object^ sender, System::EventArgs^ e) {
    if (display->Text == "0") {
        display->Text = "7";
    }
    else {
        display->Text = Convert::ToInt32(display->Text) + "7";
    }
}
private: System::Void eight_Click(System::Object^ sender, System::EventArgs^ e) {
    if (display->Text == "0") {
        display->Text = "8";
    }
    else {
        display->Text = Convert::ToInt32(display->Text) + "8";
    }
}
private: System::Void nine_Click(System::Object^ sender, System::EventArgs^ e) {
    if (display->Text == "0") {
        display->Text = "9";
    }
    else {
        display->Text = Convert::ToInt32(display->Text) + "9";
    }
}
private: System::Void zero_Click(System::Object^ sender, System::EventArgs^ e) {
    if (display->Text == "0") {
        display->Text = "0";
    }
    else {
        display->Text = Convert::ToInt32(display->Text) + "0";
    }
}
private: System::Void addition_Click(System::Object^ sender, System::EventArgs^ e) {
    firstNum = Convert::ToInt32(display->Text);
    display->Text="0";
    operation = '+';
}
private: System::Void subtraction_Click(System::Object^ sender, System::EventArgs^ e) {
    firstNum = Convert::ToInt32(display->Text);
    display->Text = "0";
    operation = '-';
}
private: System::Void multiplication_Click(System::Object^ sender, System::EventArgs^ e) {
    firstNum = Convert::ToInt32(display->Text);
    display->Text = "0";
    operation = 'x';
}
private: System::Void division_Click(System::Object^ sender, System::EventArgs^ e) {
    firstNum = Convert::ToInt32(display->Text);
    display->Text = "0";
    operation = '÷';
}
private: System::Void equals_Click(System::Object^ sender, System::EventArgs^ e) {
      if (firstNum != -1) {
          secondNum = Convert::ToInt32(display->Text);

          switch (operation)
          {
          case '+':
              result = firstNum + secondNum;
              display->Text = System::Convert::ToString(result);
              break;
          case '-':
              result = firstNum - secondNum;
              display->Text = System::Convert::ToString(result);
              break;
          case 'x':
              result = firstNum * secondNum;
              display->Text = System::Convert::ToString(result);
              break;
          case '÷':
              result = firstNum / secondNum;
              display->Text = System::Convert::ToString(result);
              break;
          };
          firstNum = -1;
          secondNum = 0;
      };
}
private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
    firstNum = -1;
    display->Text = "0";
}
}; // end of class Calculator
} // end of namespace CppCLRWinFormsProject


