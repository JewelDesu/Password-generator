#pragma once
#include <iostream>

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
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::PageSetupDialog^ pageSetupDialog1;
	private: System::Windows::Forms::TextBox^ Graza;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ Banknotai;

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
			this->pageSetupDialog1 = (gcnew System::Windows::Forms::PageSetupDialog());
			this->Graza = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Banknotai = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// Graza
			// 
			this->Graza->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Graza->BackColor = System::Drawing::SystemColors::Window;
			this->Graza->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Graza->Location = System::Drawing::Point(29, 60);
			this->Graza->Name = L"Graza";
			this->Graza->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Graza->Size = System::Drawing::Size(327, 45);
			this->Graza->TabIndex = 2;
			this->Graza->TextChanged += gcnew System::EventHandler(this, &Form2::graza_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(23, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 32);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Iveskite graza";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(237, 32);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Graza banknotais";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Menu;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(80, 334);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 50);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Skaiciuoti graza";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// Banknotai
			// 
			this->Banknotai->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Banknotai->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Banknotai->Location = System::Drawing::Point(29, 255);
			this->Banknotai->Name = L"Banknotai";
			this->Banknotai->Size = System::Drawing::Size(327, 53);
			this->Banknotai->TabIndex = 7;
			this->Banknotai->Text = L"";
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(388, 420);
			this->Controls->Add(this->Banknotai);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Graza);
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void graza_TextChanged(System::Object^ sender, System::EventArgs^ e) {


	}

	private: System::Void bank_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}

	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int x500, x200, x100, x50, x20, x10, x5;
		int x;
		x = int::Parse(Graza->Text);
		Banknotai->Text = "";
		//Banknotai->Text += x.ToString();

		x500 = x / 500;
		x = x % 500;

		x200 = x / 200;
		x = x % 200;

		x100 = x / 100;
		x = x % 100;

		x50 = x / 50;
		x = x % 50;

		x20 = x / 20;
		x = x % 20;

		x10 = x / 10;
		x = x % 10;

		x5 = x / 5;
		x = x % 5;

		if (x500 > 0)
		{
			Banknotai->Text += "500 * " + x500 + "+";
		}
		if (x200 > 0)
		{
			Banknotai->Text += "200 * " + x200 + "+";
		}
		if (x100 > 0)
		{
			Banknotai->Text += "100 * " + x100 + "+";
		}
		if (x50 > 0)
		{
			Banknotai->Text += "50 * " + x50 + "+";
		}
		if (x20 > 0)
		{
			Banknotai->Text += "20 * " + x20 + "+";
		}
		if (x10 > 0)
		{
			Banknotai->Text += "10 * " + x10 + "+";
		}
		if (x5 > 0)
		{
			Banknotai->Text += "5 * " + x5 + "+";
		}
		if (x > 0)
		{
			Banknotai->Text += x;
		}

	}
};
}
