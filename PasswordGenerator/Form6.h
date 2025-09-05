#pragma once
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
    /// Summary for Form1
    /// </summary>
    public ref class Form6 : public System::Windows::Forms::Form
    {
    public:
        Form6(void)
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
        ~Form6()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::RichTextBox^ richTextBox1;
    protected:

    protected:

    protected:

    protected:

    protected:



    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;


    private: System::Void Form6_Load(System::Object^ sender, System::EventArgs^ e) {
        richTextBox1->LoadFile("out.txt", RichTextBoxStreamType::PlainText);
    }
    private: System::Void InitializeComponent() {
        this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
        this->SuspendLayout();
        // 
        // richTextBox1
        // 
        this->richTextBox1->Location = System::Drawing::Point(0, 0);
        this->richTextBox1->Name = L"richTextBox1";
        this->richTextBox1->Size = System::Drawing::Size(326, 371);
        this->richTextBox1->TabIndex = 0;
        this->richTextBox1->Text = L"";
       // this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form6::richTextBox1_TextChanged);
        // 
        // Form6
        // 
        this->ClientSize = System::Drawing::Size(327, 383);
        this->Controls->Add(this->richTextBox1);
        this->Name = L"Form6";
        this->Load += gcnew System::EventHandler(this, &Form6::Form6_Load);
        this->ResumeLayout(false);

    }


    private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
    }

    };
}