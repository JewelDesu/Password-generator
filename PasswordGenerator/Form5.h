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
    public ref class Form5 : public System::Windows::Forms::Form
    {
    public:
        Form5(void)
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
        ~Form5()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::PictureBox^ pictureBox1;
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


    private: System::Void Form5_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void InitializeComponent() {
        System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form5::typeid));
        this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
        this->SuspendLayout();
        // 
        // pictureBox1
        // 
        this->pictureBox1->Image = Image::FromFile("vard.png");   
        this->pictureBox1->Location = System::Drawing::Point(4, 3);
        this->pictureBox1->Name = L"pictureBox1";
        this->pictureBox1->Size = System::Drawing::Size(320, 377);
        this->pictureBox1->TabIndex = 0;
        this->pictureBox1->TabStop = false;
        // 
        // Form5
        // 
        this->ClientSize = System::Drawing::Size(327, 383);
        this->Controls->Add(this->pictureBox1);
        this->Name = L"Form5";
        this->Load += gcnew System::EventHandler(this, &Form5::Form5_Load);
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
        this->ResumeLayout(false);

    }


    private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}