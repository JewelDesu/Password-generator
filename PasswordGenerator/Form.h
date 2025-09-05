#pragma once
#include <iostream>
#include "Form5.h"
#include "Form2.h"
#include "Form3.h"
#include "Form4.h"
#include "Form6.h"

namespace
CppCLRWinFormsProject{
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
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PageSetupDialog^ pageSetupDialog1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ autoriusToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ iseitiToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pageSetupDialog1 = (gcnew System::Windows::Forms::PageSetupDialog());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->autoriusToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iseitiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(0, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(0, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->autoriusToolStripMenuItem,
					this->iseitiToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(278, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// autoriusToolStripMenuItem
			// 
			this->autoriusToolStripMenuItem->Name = L"autoriusToolStripMenuItem";
			this->autoriusToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->autoriusToolStripMenuItem->Text = L"Author";
			this->autoriusToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::autoriusToolStripMenuItem_Click_1);
			// 
			// iseitiToolStripMenuItem
			// 
			this->iseitiToolStripMenuItem->Name = L"iseitiToolStripMenuItem";
			this->iseitiToolStripMenuItem->Size = System::Drawing::Size(42, 20);
			this->iseitiToolStripMenuItem->Text = L"Quit";
			this->iseitiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::iseitiToolStripMenuItem_Click_1);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(73, 76);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(205, 40);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Password generator";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(39, 137);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(205, 40);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Passwords";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(39, 76);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(205, 40);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Password generator";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(278, 382);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Password generator";
			this->Text = L"Password generator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//	Form5^ frm5 = gcnew Form5;
	//	frm5->Show();
	//}
	//private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//	Form2^ frm2 = gcnew Form2;
	//	frm2->Show();
	//}
	//private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//	Form3^ frm3 = gcnew Form3;
	//	frm3->Show();
	//}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Form4^ frm4 = gcnew Form4;
		frm4->Show();
	}

	private: System::Void autoriusToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Big Chungus");

	}
	private: System::Void iseitiToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Form6^ frm6 = gcnew Form6;
		frm6->Show();
	}
};
}
