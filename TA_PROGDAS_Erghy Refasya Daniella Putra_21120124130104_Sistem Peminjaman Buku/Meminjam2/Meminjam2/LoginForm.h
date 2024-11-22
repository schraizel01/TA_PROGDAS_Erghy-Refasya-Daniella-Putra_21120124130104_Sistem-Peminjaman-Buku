#pragma once
#include "Meminjamh.h"

namespace Meminjam2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btLogin;
	protected:

	private: System::Windows::Forms::Button^ btClear;
	protected:



	private: System::Windows::Forms::Label^ SignIn;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::TextBox^ tbUsername;

	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->btLogin = (gcnew System::Windows::Forms::Button());
			this->btClear = (gcnew System::Windows::Forms::Button());
			this->SignIn = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btLogin
			// 
			this->btLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F));
			this->btLogin->Location = System::Drawing::Point(564, 342);
			this->btLogin->Name = L"btLogin";
			this->btLogin->Size = System::Drawing::Size(137, 42);
			this->btLogin->TabIndex = 0;
			this->btLogin->Text = L"Sign In";
			this->btLogin->UseVisualStyleBackColor = true;
			this->btLogin->Click += gcnew System::EventHandler(this, &LoginForm::btLogin_Click);
			// 
			// btClear
			// 
			this->btClear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F));
			this->btClear->Location = System::Drawing::Point(723, 342);
			this->btClear->Name = L"btClear";
			this->btClear->Size = System::Drawing::Size(154, 42);
			this->btClear->TabIndex = 1;
			this->btClear->Text = L"Clear";
			this->btClear->UseVisualStyleBackColor = true;
			this->btClear->Click += gcnew System::EventHandler(this, &LoginForm::btClear_Click);
			// 
			// SignIn
			// 
			this->SignIn->AutoSize = true;
			this->SignIn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.8F, System::Drawing::FontStyle::Bold));
			this->SignIn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->SignIn->Location = System::Drawing::Point(579, 23);
			this->SignIn->Name = L"SignIn";
			this->SignIn->Size = System::Drawing::Size(166, 59);
			this->SignIn->TabIndex = 3;
			this->SignIn->Text = L"Sign In";
			this->SignIn->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F));
			this->label2->Location = System::Drawing::Point(425, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F));
			this->label3->Location = System::Drawing::Point(425, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Username";
			this->label3->Click += gcnew System::EventHandler(this, &LoginForm::label3_Click);
			// 
			// tbPassword
			// 
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F));
			this->tbPassword->Location = System::Drawing::Point(564, 227);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(313, 31);
			this->tbPassword->TabIndex = 6;
			this->tbPassword->TextChanged += gcnew System::EventHandler(this, &LoginForm::textBox1_TextChanged);
			// 
			// tbUsername
			// 
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F));
			this->tbUsername->Location = System::Drawing::Point(564, 149);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(313, 31);
			this->tbUsername->TabIndex = 7;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(379, 690);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->ClientSize = System::Drawing::Size(922, 486);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->SignIn);
			this->Controls->Add(this->btClear);
			this->Controls->Add(this->btLogin);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void libExit_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

}
private: System::Void btClear_Click(System::Object^ sender, System::EventArgs^ e) {
	tbUsername->Clear();
	tbPassword->Clear();
}
private: System::Void btLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	array<String^>^ Username;
	Username = gcnew array<String^>{ "Erghy", "Kiryu", "Coba", "n" };
	array<String^>^ Password;
	Password = gcnew array<String^>{"P1ckler1ck", "Pasword123", "234", "selesai"};
	if (tbUsername->TextLength == 0 || tbPassword->TextLength == 0) {
		MessageBox::Show("Password or Username Empty Please Fill The Form");
	}
	else {
		bool valid = false;
		for (int q = 0; q <= 3; q++) {
			if (tbUsername->Text == Username[q] && tbPassword->Text == Password[q]) {
				valid = true;
				break;
			}
			
		}
		if (valid == true) {
			Meminjamh^ minjam = gcnew Meminjamh();
			tbUsername->Text = "";
			tbPassword->Text = "";
			minjam->ShowDialog();
		}
		else {
			MessageBox::Show("Password or Username Is incorrect Please Try Again");
		}
	}
}
};
}
