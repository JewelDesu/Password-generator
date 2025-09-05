#pragma once
#include <iostream> 
#include <cstdlib>
#include <time.h>
#include <fstream>

namespace
	CppCLRWinFormsProject {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::TextBox^ textBox1;
    protected:
    private: System::Windows::Forms::RichTextBox^ richTextBox1ilg;
    private: System::Windows::Forms::RichTextBox^ richTextBox2slapt;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;


	private: System::Void Form4_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void InitializeComponent() {
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->richTextBox1ilg = (gcnew System::Windows::Forms::RichTextBox());
		this->richTextBox2slapt = (gcnew System::Windows::Forms::RichTextBox());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->SuspendLayout();
		// 
		// textBox1
		// 
		this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->textBox1->Location = System::Drawing::Point(12, 12);
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(205, 26);
		this->textBox1->TabIndex = 0;
		this->textBox1->Text = L"Password lenght";
		this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form4::textBox1_TextChanged);
		// 
		// richTextBox1ilg
		// 
		this->richTextBox1ilg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->richTextBox1ilg->Location = System::Drawing::Point(223, 12);
		this->richTextBox1ilg->Name = L"richTextBox1ilg";
		this->richTextBox1ilg->Size = System::Drawing::Size(53, 30);
		this->richTextBox1ilg->TabIndex = 1;
		this->richTextBox1ilg->Text = L"";
		// 
		// richTextBox2slapt
		// 
		this->richTextBox2slapt->Location = System::Drawing::Point(12, 213);
		this->richTextBox2slapt->Name = L"richTextBox2slapt";
		this->richTextBox2slapt->Size = System::Drawing::Size(264, 32);
		this->richTextBox2slapt->TabIndex = 2;
		this->richTextBox2slapt->Text = L"";
		// 
		// button1
		// 
		this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->button1->Location = System::Drawing::Point(52, 109);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(165, 77);
		this->button1->TabIndex = 3;
		this->button1->Text = L"generate";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &Form4::button1_Click);
		// 
		// Form4
		// 
		this->ClientSize = System::Drawing::Size(282, 257);
		this->Controls->Add(this->button1);
		this->Controls->Add(this->richTextBox2slapt);
		this->Controls->Add(this->richTextBox1ilg);
		this->Controls->Add(this->textBox1);
		this->Name = L"Form4";
		this->ResumeLayout(false);
		this->PerformLayout();

	}
    private: System::Windows::Forms::Button^ button1;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        int x = System::Convert::ToInt64(richTextBox1ilg->Text);
        ofstream fout ("out.txt",ios::app);
        richTextBox2slapt->Text = "";
        string slapt;
        char simb;

        srand (time(NULL));
         while (slapt.size() < x)
         {
             simb = rand();
             if (simb >= '0' && simb <= 'z')
             {
                 slapt += simb;
                 richTextBox2slapt->Text += Char::ToString(simb);
                 fout << simb;
             }
         }
         fout << endl;

         //fout.close();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}