#pragma once

namespace FirstProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textName;
	private: System::Windows::Forms::TextBox^ textEmail;
	private: System::Windows::Forms::TextBox^ textMobile;
	private: System::Windows::Forms::Button^ txtSubmit;
	private: System::Windows::Forms::Button^ txtReset;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->textEmail = (gcnew System::Windows::Forms::TextBox());
			this->textMobile = (gcnew System::Windows::Forms::TextBox());
			this->txtSubmit = (gcnew System::Windows::Forms::Button());
			this->txtReset = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label1->Location = System::Drawing::Point(48, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Full Name :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label2->Location = System::Drawing::Point(46, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Mobile No :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label3->Location = System::Drawing::Point(52, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"E-mail ID :";
			// 
			// textName
			// 
			this->textName->Location = System::Drawing::Point(121, 39);
			this->textName->Name = L"textName";
			this->textName->Size = System::Drawing::Size(293, 20);
			this->textName->TabIndex = 3;
			// 
			// textEmail
			// 
			this->textEmail->Location = System::Drawing::Point(121, 89);
			this->textEmail->Name = L"textEmail";
			this->textEmail->Size = System::Drawing::Size(293, 20);
			this->textEmail->TabIndex = 4;
			// 
			// textMobile
			// 
			this->textMobile->Location = System::Drawing::Point(121, 139);
			this->textMobile->Name = L"textMobile";
			this->textMobile->Size = System::Drawing::Size(293, 20);
			this->textMobile->TabIndex = 5;
			// 
			// txtSubmit
			// 
			this->txtSubmit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSubmit->ForeColor = System::Drawing::SystemColors::GrayText;
			this->txtSubmit->Location = System::Drawing::Point(121, 178);
			this->txtSubmit->Name = L"txtSubmit";
			this->txtSubmit->Size = System::Drawing::Size(99, 40);
			this->txtSubmit->TabIndex = 6;
			this->txtSubmit->Text = L"Submit";
			this->txtSubmit->UseVisualStyleBackColor = false;
			this->txtSubmit->Click += gcnew System::EventHandler(this, &MainForm::txtSubmit_Click);
			// 
			// txtReset
			// 
			this->txtReset->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtReset->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtReset->ForeColor = System::Drawing::SystemColors::GrayText;
			this->txtReset->Location = System::Drawing::Point(315, 178);
			this->txtReset->Name = L"txtReset";
			this->txtReset->Size = System::Drawing::Size(99, 40);
			this->txtReset->TabIndex = 7;
			this->txtReset->Text = L"Reset";
			this->txtReset->UseVisualStyleBackColor = false;
			this->txtReset->Click += gcnew System::EventHandler(this, &MainForm::txtReset_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(511, 262);
			this->Controls->Add(this->txtReset);
			this->Controls->Add(this->txtSubmit);
			this->Controls->Add(this->textMobile);
			this->Controls->Add(this->textEmail);
			this->Controls->Add(this->textName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void txtReset_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textEmail->Text = "";
	this->textMobile->Text = "";
	this->textName->Text = "";
}
private: System::Void txtSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textName->Text->Trim() == "") {
		MessageBox::Show("Please Enter Name","Validation",MessageBoxButtons::OK,MessageBoxIcon::Error);
	}else if (this->textEmail->Text->Trim() == "") {
		MessageBox::Show("Please Enter your emailID", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}else if (this->textMobile->Text->Trim() == "") {
		MessageBox::Show("Please Enter your MobileNo", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		MessageBox::Show("Data Submitted Successfuly", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
};
}
