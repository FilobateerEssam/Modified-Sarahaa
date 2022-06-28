#pragma once
#include <direct.h>
#include <string>
#include <ctime>
#include <fstream>
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
	/// Summary for registerForm
	/// </summary>
	public ref class registerForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;



		registerForm(void)
		{

			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}
		registerForm(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		int getId()
		{
			int randomNumber = 0;
			srand(time(0));//seed the rand function

			randomNumber = rand();
			return randomNumber;
		}

		void Register(string UserName, string Password, string email)
		{
			Test app;
			int ID = getId();
			email = email + "@sarahaa.com";
			//	String^ s = gcnew String(UserName.c_str());
			//	MessageBox::Show(s);

			
			string Folder_Name_UserFolder = UserName + to_string(ID);
			string path = "Users\\" + Folder_Name_UserFolder;
			_mkdir(path.c_str());

			string Folder_Name_Reecevied = "Recieved";
			string path_Recieved = "Users\\" + Folder_Name_UserFolder + "\\Recieved";
			_mkdir(path_Recieved.c_str());

			ofstream make;
			make.open("Users\\" + Folder_Name_UserFolder + "\\Send Messages.txt", ios::app | ios::out);
			make.close();
			make.open("Users\\" + Folder_Name_UserFolder + "\\Favourites Messages.txt", ios::app | ios::out);
			make.close();
			make.open("Users\\" + Folder_Name_UserFolder + "\\Data.txt", ios::app | ios::out);
			make << ID << "\n" << Folder_Name_UserFolder << "\n" << Password << "\n" << email << "\n";
			make.close();
			make.open("Users\\" + Folder_Name_UserFolder + "\\Contacts.txt", ios::app | ios::out);
			make.close();

			//		user.UserName = Folder_Name_UserFolder;
			//		user.Password = Password;
				//	user.ID = ID;
				//	String^ s = gcnew String(user.UserName.c_str());
				//MessageBox::Show(s);r
			app.saraha.Password = Password;
			app.saraha.UserName = Folder_Name_UserFolder;
			app.saraha.Email = email;
			app.saraha.ID = ID;


		}
		void MarshalString(String^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~registerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ username_label;
	private: System::Windows::Forms::TextBox^ email_textBox;

	private: System::Windows::Forms::Label^ email_label;

	private: System::Windows::Forms::TextBox^ username_textBox;
	private: System::Windows::Forms::TextBox^ password_textBox;
	private: System::Windows::Forms::Label^ password_label;
	private: System::Windows::Forms::TextBox^ ConfirmPassword_textBox;
	private: System::Windows::Forms::Label^ confirmPassword_label;
	private: System::Windows::Forms::Button^ register_button;
	private: System::Windows::Forms::Label^ register_label;
	private: System::Windows::Forms::Label^ _label;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->_label = (gcnew System::Windows::Forms::Label());
			this->register_button = (gcnew System::Windows::Forms::Button());
			this->ConfirmPassword_textBox = (gcnew System::Windows::Forms::TextBox());
			this->confirmPassword_label = (gcnew System::Windows::Forms::Label());
			this->password_textBox = (gcnew System::Windows::Forms::TextBox());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->email_textBox = (gcnew System::Windows::Forms::TextBox());
			this->email_label = (gcnew System::Windows::Forms::Label());
			this->username_textBox = (gcnew System::Windows::Forms::TextBox());
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->register_label = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Highlight;
			this->groupBox1->Controls->Add(this->_label);
			this->groupBox1->Controls->Add(this->register_button);
			this->groupBox1->Controls->Add(this->ConfirmPassword_textBox);
			this->groupBox1->Controls->Add(this->confirmPassword_label);
			this->groupBox1->Controls->Add(this->password_textBox);
			this->groupBox1->Controls->Add(this->password_label);
			this->groupBox1->Controls->Add(this->email_textBox);
			this->groupBox1->Controls->Add(this->email_label);
			this->groupBox1->Controls->Add(this->username_textBox);
			this->groupBox1->Controls->Add(this->username_label);
			this->groupBox1->Location = System::Drawing::Point(115, 126);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(483, 560);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &registerForm::groupBox1_Enter);
			// 
			// _label
			// 
			this->_label->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->_label->AutoSize = true;
			this->_label->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->_label->Location = System::Drawing::Point(247, 164);
			this->_label->Name = L"_label";
			this->_label->Size = System::Drawing::Size(122, 22);
			this->_label->TabIndex = 20;
			this->_label->Text = L"@sarahaa.com";
			// 
			// register_button
			// 
			this->register_button->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->register_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->register_button->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->register_button->Location = System::Drawing::Point(141, 438);
			this->register_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->register_button->Name = L"register_button";
			this->register_button->Size = System::Drawing::Size(179, 34);
			this->register_button->TabIndex = 19;
			this->register_button->Text = L"Register";
			this->register_button->UseVisualStyleBackColor = true;
			this->register_button->Click += gcnew System::EventHandler(this, &registerForm::register_button_Click);
			// 
			// ConfirmPassword_textBox
			// 
			this->ConfirmPassword_textBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ConfirmPassword_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ConfirmPassword_textBox->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ConfirmPassword_textBox->Location = System::Drawing::Point(92, 336);
			this->ConfirmPassword_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ConfirmPassword_textBox->Name = L"ConfirmPassword_textBox";
			this->ConfirmPassword_textBox->PasswordChar = '*';
			this->ConfirmPassword_textBox->Size = System::Drawing::Size(300, 24);
			this->ConfirmPassword_textBox->TabIndex = 18;
			this->ConfirmPassword_textBox->Text = L"Re-write your password here";
			// 
			// confirmPassword_label
			// 
			this->confirmPassword_label->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->confirmPassword_label->AutoSize = true;
			this->confirmPassword_label->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmPassword_label->Location = System::Drawing::Point(88, 311);
			this->confirmPassword_label->Name = L"confirmPassword_label";
			this->confirmPassword_label->Size = System::Drawing::Size(198, 22);
			this->confirmPassword_label->TabIndex = 17;
			this->confirmPassword_label->Text = L"Confirm your password";
			// 
			// password_textBox
			// 
			this->password_textBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->password_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_textBox->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->password_textBox->Location = System::Drawing::Point(88, 249);
			this->password_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->password_textBox->Name = L"password_textBox";
			this->password_textBox->PasswordChar = '*';
			this->password_textBox->Size = System::Drawing::Size(300, 24);
			this->password_textBox->TabIndex = 16;
			this->password_textBox->Text = L"Enter your password here";
			// 
			// password_label
			// 
			this->password_label->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->password_label->AutoSize = true;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_label->Location = System::Drawing::Point(84, 224);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(85, 22);
			this->password_label->TabIndex = 15;
			this->password_label->Text = L"Password";
			// 
			// email_textBox
			// 
			this->email_textBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->email_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_textBox->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->email_textBox->Location = System::Drawing::Point(88, 160);
			this->email_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->email_textBox->Name = L"email_textBox";
			this->email_textBox->Size = System::Drawing::Size(152, 24);
			this->email_textBox->TabIndex = 14;
			this->email_textBox->Text = L"Enter your email here";
			this->email_textBox->TextChanged += gcnew System::EventHandler(this, &registerForm::textBox1_TextChanged);
			// 
			// email_label
			// 
			this->email_label->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->email_label->AutoSize = true;
			this->email_label->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_label->Location = System::Drawing::Point(84, 135);
			this->email_label->Name = L"email_label";
			this->email_label->Size = System::Drawing::Size(54, 22);
			this->email_label->TabIndex = 13;
			this->email_label->Text = L"Email";
			this->email_label->Click += gcnew System::EventHandler(this, &registerForm::label1_Click);
			// 
			// username_textBox
			// 
			this->username_textBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->username_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_textBox->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->username_textBox->Location = System::Drawing::Point(88, 74);
			this->username_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->username_textBox->Name = L"username_textBox";
			this->username_textBox->Size = System::Drawing::Size(300, 24);
			this->username_textBox->TabIndex = 12;
			this->username_textBox->Text = L"Enter your username here";
			// 
			// username_label
			// 
			this->username_label->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->username_label->AutoSize = true;
			this->username_label->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_label->Location = System::Drawing::Point(84, 49);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(89, 22);
			this->username_label->TabIndex = 11;
			this->username_label->Text = L"Username";
			// 
			// register_label
			// 
			this->register_label->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->register_label->AutoSize = true;
			this->register_label->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->register_label->Location = System::Drawing::Point(197, 39);
			this->register_label->Name = L"register_label";
			this->register_label->Size = System::Drawing::Size(292, 30);
			this->register_label->TabIndex = 1;
			this->register_label->Text = L"Register a new account";
			this->register_label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// registerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(701, 721);
			this->Controls->Add(this->register_label);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"registerForm";
			this->Text = L"registerForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void register_button_Click(System::Object^ sender, System::EventArgs^ e) {

		string u, p, em;

		if (password_textBox->Text != ConfirmPassword_textBox->Text)
			MessageBox::Show("Re-write the confirmation password");


		else
		{
			MarshalString(username_textBox->Text, u);
			MarshalString(password_textBox->Text, p);
			MarshalString(email_textBox->Text, em);


			
			Register(u, p, em);


			this->Hide();
			pages^ home_page = gcnew pages;
			home_page->ShowDialog();
			this->Close();

		}

		//String^ s = gcnew String(s2.c_str());
		//MessageBox::Show(s);
	}
	};
}
