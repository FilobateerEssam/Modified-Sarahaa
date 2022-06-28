#pragma once
#include <string>
#include <fstream>
#include <iomanip>
#include <string>

#include "registerForm.h"
#include "G2.h"
#include "pages.h"

namespace ModifiedSarahaaGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{




	public:
		static String^ Username;
		//static String^ name;
		//void getData(String^& name, String^& pass, int& id) {
		//	name = username_textBox->Text;
		//}
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
		void MarshalString(String^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

		bool loginF(std::string UserName, std::string Password)
		{
			using namespace std;

			string store;
			ifstream read;
			read.open("Users\\" + UserName + "\\Data.txt", ios::out);

			getline(read, store);
			getline(read, store);

			if (read.is_open()) {
				getline(read, store);
				//	String^ str2 = gcnew String(store.c_str());
				//	MessageBox::Show(str2);
				read.close();

				if (Password != store)
				{
					MessageBox::Show("The Password is not correct");
					return false;
				}

				else
					return true;
				// go to the home page for user to show his functions
			}
			else
			{
				MessageBox::Show("this user doesn't exist");
				return false;
			}

		}
	private: System::Windows::Forms::Label^ welcom_label;

	private: System::Windows::Forms::Button^ register_button;
	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::Button^ login_button;
	private: System::Windows::Forms::Label^ password_label;
	private: System::Windows::Forms::TextBox^ password_textBox;
	private: System::Windows::Forms::Label^ username_label;
	private: System::Windows::Forms::TextBox^ username_textBox;
	private: System::Windows::Forms::Button^ forogotPassword_button;
	private: System::Windows::Forms::Panel^ login_panel;
	private: System::Windows::Forms::Panel^ forgotPassword_panel;
	private: System::Windows::Forms::TextBox^ getPasswordEMAIL_textBox;
	private: System::Windows::Forms::Button^ getPasswordEMAIL_button;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ usernameForget_textBox;
	private: System::Windows::Forms::Label^ label2;




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
			this->welcom_label = (gcnew System::Windows::Forms::Label());
			this->register_button = (gcnew System::Windows::Forms::Button());
			this->label = (gcnew System::Windows::Forms::Label());
			this->login_button = (gcnew System::Windows::Forms::Button());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->password_textBox = (gcnew System::Windows::Forms::TextBox());
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->username_textBox = (gcnew System::Windows::Forms::TextBox());
			this->forogotPassword_button = (gcnew System::Windows::Forms::Button());
			this->login_panel = (gcnew System::Windows::Forms::Panel());
			this->forgotPassword_panel = (gcnew System::Windows::Forms::Panel());
			this->usernameForget_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->getPasswordEMAIL_textBox = (gcnew System::Windows::Forms::TextBox());
			this->getPasswordEMAIL_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->login_panel->SuspendLayout();
			this->forgotPassword_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// welcom_label
			// 
			this->welcom_label->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->welcom_label->AutoSize = true;
			this->welcom_label->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcom_label->Location = System::Drawing::Point(199, 38);
			this->welcom_label->Name = L"welcom_label";
			this->welcom_label->Size = System::Drawing::Size(370, 30);
			this->welcom_label->TabIndex = 0;
			this->welcom_label->Text = L"Welcome to the New Sarahaa";
			this->welcom_label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->welcom_label->Click += gcnew System::EventHandler(this, &login::label1_Click);
			// 
			// register_button
			// 
			this->register_button->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->register_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->register_button->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->register_button->Location = System::Drawing::Point(215, 468);
			this->register_button->Name = L"register_button";
			this->register_button->Size = System::Drawing::Size(179, 34);
			this->register_button->TabIndex = 15;
			this->register_button->Text = L"Register now!!";
			this->register_button->UseVisualStyleBackColor = true;
			this->register_button->Click += gcnew System::EventHandler(this, &login::register_button_Click);
			// 
			// label
			// 
			this->label->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label->Location = System::Drawing::Point(152, 396);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(312, 50);
			this->label->TabIndex = 14;
			this->label->Text = L"Don\'t have an account\?\r\nNo problem";
			this->label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// login_button
			// 
			this->login_button->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->login_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->login_button->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_button->Location = System::Drawing::Point(215, 290);
			this->login_button->Name = L"login_button";
			this->login_button->Size = System::Drawing::Size(179, 34);
			this->login_button->TabIndex = 13;
			this->login_button->Text = L"Login";
			this->login_button->UseVisualStyleBackColor = true;
			this->login_button->Click += gcnew System::EventHandler(this, &login::login_button_Click);
			// 
			// password_label
			// 
			this->password_label->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->password_label->AutoSize = true;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_label->Location = System::Drawing::Point(152, 153);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(85, 22);
			this->password_label->TabIndex = 12;
			this->password_label->Text = L"Password";
			// 
			// password_textBox
			// 
			this->password_textBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->password_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_textBox->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->password_textBox->Location = System::Drawing::Point(156, 178);
			this->password_textBox->Name = L"password_textBox";
			this->password_textBox->PasswordChar = '*';
			this->password_textBox->Size = System::Drawing::Size(300, 24);
			this->password_textBox->TabIndex = 11;
			this->password_textBox->Text = L"Enter you password here";
			// 
			// username_label
			// 
			this->username_label->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->username_label->AutoSize = true;
			this->username_label->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_label->Location = System::Drawing::Point(152, 59);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(89, 22);
			this->username_label->TabIndex = 10;
			this->username_label->Text = L"Username";
			// 
			// username_textBox
			// 
			this->username_textBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->username_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_textBox->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->username_textBox->Location = System::Drawing::Point(155, 84);
			this->username_textBox->Name = L"username_textBox";
			this->username_textBox->Size = System::Drawing::Size(300, 24);
			this->username_textBox->TabIndex = 9;
			this->username_textBox->Text = L"Enter your username here";
			// 
			// forogotPassword_button
			// 
			this->forogotPassword_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->forogotPassword_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->forogotPassword_button->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->forogotPassword_button->FlatAppearance->BorderSize = 0;
			this->forogotPassword_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->forogotPassword_button->Location = System::Drawing::Point(164, 208);
			this->forogotPassword_button->Name = L"forogotPassword_button";
			this->forogotPassword_button->Size = System::Drawing::Size(136, 34);
			this->forogotPassword_button->TabIndex = 16;
			this->forogotPassword_button->Text = L"Forgot Password\?";
			this->forogotPassword_button->UseVisualStyleBackColor = false;
			this->forogotPassword_button->Click += gcnew System::EventHandler(this, &login::forogotPassword_button_Click);
			// 
			// login_panel
			// 
			this->login_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->login_panel->BackColor = System::Drawing::SystemColors::Highlight;
			this->login_panel->Controls->Add(this->username_textBox);
			this->login_panel->Controls->Add(this->forogotPassword_button);
			this->login_panel->Controls->Add(this->register_button);
			this->login_panel->Controls->Add(this->label);
			this->login_panel->Controls->Add(this->password_label);
			this->login_panel->Controls->Add(this->login_button);
			this->login_panel->Controls->Add(this->username_label);
			this->login_panel->Controls->Add(this->password_textBox);
			this->login_panel->Location = System::Drawing::Point(92, 146);
			this->login_panel->Name = L"login_panel";
			this->login_panel->Size = System::Drawing::Size(620, 552);
			this->login_panel->TabIndex = 2;
			this->login_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &login::login_panel_Paint);
			// 
			// forgotPassword_panel
			// 
			this->forgotPassword_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->forgotPassword_panel->BackColor = System::Drawing::SystemColors::Highlight;
			this->forgotPassword_panel->Controls->Add(this->usernameForget_textBox);
			this->forgotPassword_panel->Controls->Add(this->label2);
			this->forgotPassword_panel->Controls->Add(this->button1);
			this->forgotPassword_panel->Controls->Add(this->getPasswordEMAIL_textBox);
			this->forgotPassword_panel->Controls->Add(this->getPasswordEMAIL_button);
			this->forgotPassword_panel->Controls->Add(this->label1);
			this->forgotPassword_panel->Controls->Add(this->label6);
			this->forgotPassword_panel->Location = System::Drawing::Point(92, 146);
			this->forgotPassword_panel->Name = L"forgotPassword_panel";
			this->forgotPassword_panel->Size = System::Drawing::Size(620, 555);
			this->forgotPassword_panel->TabIndex = 3;
			this->forgotPassword_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &login::forgotPassword_panel_Paint);
			// 
			// usernameForget_textBox
			// 
			this->usernameForget_textBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->usernameForget_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->usernameForget_textBox->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->usernameForget_textBox->Location = System::Drawing::Point(143, 122);
			this->usernameForget_textBox->Name = L"usernameForget_textBox";
			this->usernameForget_textBox->Size = System::Drawing::Size(300, 24);
			this->usernameForget_textBox->TabIndex = 25;
			this->usernameForget_textBox->Text = L"Enter your username here";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(139, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 22);
			this->label2->TabIndex = 26;
			this->label2->Text = L"USERNAME";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(413, 498);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 34);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Go back to login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &login::button1_Click);
			// 
			// getPasswordEMAIL_textBox
			// 
			this->getPasswordEMAIL_textBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->getPasswordEMAIL_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->getPasswordEMAIL_textBox->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->getPasswordEMAIL_textBox->Location = System::Drawing::Point(144, 245);
			this->getPasswordEMAIL_textBox->Name = L"getPasswordEMAIL_textBox";
			this->getPasswordEMAIL_textBox->Size = System::Drawing::Size(300, 24);
			this->getPasswordEMAIL_textBox->TabIndex = 21;
			this->getPasswordEMAIL_textBox->Text = L"Enter your e-mail here";
			this->getPasswordEMAIL_textBox->TextChanged += gcnew System::EventHandler(this, &login::getPasswordEMAIL_textBox_TextChanged);
			// 
			// getPasswordEMAIL_button
			// 
			this->getPasswordEMAIL_button->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->getPasswordEMAIL_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->getPasswordEMAIL_button->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->getPasswordEMAIL_button->Location = System::Drawing::Point(197, 330);
			this->getPasswordEMAIL_button->Name = L"getPasswordEMAIL_button";
			this->getPasswordEMAIL_button->Size = System::Drawing::Size(179, 34);
			this->getPasswordEMAIL_button->TabIndex = 23;
			this->getPasswordEMAIL_button->Text = L"Get Password";
			this->getPasswordEMAIL_button->UseVisualStyleBackColor = true;
			this->getPasswordEMAIL_button->Click += gcnew System::EventHandler(this, &login::getPasswordEMAIL_button_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(140, 220);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 22);
			this->label1->TabIndex = 22;
			this->label1->Text = L"E-MAIL";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(45, 37);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(279, 22);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Write your username and e-mail :";
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(817, 770);
			this->Controls->Add(this->welcom_label);
			this->Controls->Add(this->login_panel);
			this->Controls->Add(this->forgotPassword_panel);
			this->Name = L"login";
			this->Text = L"login";
			this->login_panel->ResumeLayout(false);
			this->login_panel->PerformLayout();
			this->forgotPassword_panel->ResumeLayout(false);
			this->forgotPassword_panel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void login_button_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ UserName = username_textBox->Text;
		String^ Pass = password_textBox->Text;
		string u, p;


		MarshalString(UserName, u);
		MarshalString(Pass, p);


		Test app2;



		bool flag = loginF(u, p);

		if (flag)
		{

			app2.saraha.UserName = u;
			app2.saraha.Password = p;
			string temp;

			ifstream read;
			read.open("Users\\" + u + "\\Data.txt");
			getline(read, temp);
			read.close();

			app2.saraha.ID = stoi(temp);

			this->Hide();
			pages^ home_page = gcnew pages;
			home_page->ShowDialog();
			this->Close();

		}

						

	}
	private: System::Void register_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		registerForm^ reg = gcnew registerForm;
		reg->ShowDialog();
		this->Close();
	}
	private: System::Void forogotPassword_button_Click(System::Object^ sender, System::EventArgs^ e) {
		forgotPassword_panel->BringToFront();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	login_panel->BringToFront();

	MessageBox::Show("We are Glad to help you");
}
private: System::Void getPasswordEMAIL_button_Click(System::Object^ sender, System::EventArgs^ e) {

	string em, u;

	MarshalString(getPasswordEMAIL_textBox->Text, em);
	MarshalString(usernameForget_textBox->Text, u);

	Test app;
	string pass = app.saraha.forget( em, u);

	if (pass == "error")
		MessageBox::Show("Sorry Account Not Found \n");

	else {
		String^ p = gcnew String(pass.c_str());
		MessageBox::Show("Account Found \n Your password is: " + p);
	}
		
}
private: System::Void getPasswordEMAIL_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void getPasswordID_button_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void forgotPassword_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void login_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
