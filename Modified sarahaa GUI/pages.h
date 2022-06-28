#pragma once
#include "G2.h"


namespace ModifiedSarahaaGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for pages
	/// </summary>
	public ref class pages : public System::Windows::Forms::Form
	{
	public:
		int fav = 0, con = 0, sentIndex = 0, rec = 0, sender = 0;


	private: System::Windows::Forms::Panel^ empty;
	private: System::Windows::Forms::Panel^ emptySent;
	private: System::Windows::Forms::Button^ showMsg_button;
	private: System::Windows::Forms::Panel^ final_sent_panel;
	private: System::Windows::Forms::Panel^ message_panel;
	public: System::Windows::Forms::TextBox^ textbox123;
	public: System::Windows::Forms::Label^ contact;
	private:

	private:

	private: System::Windows::Forms::Label^ sentTo_label;
	public:
	private: System::Windows::Forms::Button^ undo_button;
	private: System::Windows::Forms::Button^ nextSent_button;
	private: System::Windows::Forms::Button^ prevSent_button;
	private: System::Windows::Forms::Panel^ emptyRec;

	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Panel^ emptyFav;
	private: System::Windows::Forms::Button^ showfav_button;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::Button^ show_rec_button;
	private: System::Windows::Forms::TextBox^ chosenId_textBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;
	public:

	public:

	public:
	private: System::Windows::Forms::Button^ cancel_button;
	public:


		pages(void)
		{
			InitializeComponent();
			Test app;
			string id = "your id is: " + to_string(app.saraha.ID);
			string name = app.saraha.UserName;
			page_label->Text = gcnew String(id.c_str());
			user_label->Text = gcnew String(name.c_str());

			app.saraha.UploadSentMessages();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
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
		~pages()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ upper_panel;
	protected:

	private: System::Windows::Forms::Panel^ right_panel;
	protected:






	private: System::Windows::Forms::Button^ contact_button;
	private: System::Windows::Forms::Button^ home_button;
	private: System::Windows::Forms::Button^ receviesd_button;


	private: System::Windows::Forms::Button^ sent_button;
	private: System::Windows::Forms::Button^ fav_button;



	private:

	public:
	public: System::Windows::Forms::Label^ user_label;
	private:
	private: System::Windows::Forms::Label^ welcome_label;
	public: System::Windows::Forms::Label^ page_label;
	private: System::Windows::Forms::Panel^ container_panel;
	public:

	public:
	private: System::Windows::Forms::Panel^ rec_panel;

	private: System::Windows::Forms::Panel^ fav_panel;
	private: System::Windows::Forms::Panel^ contact_panel;

	private: System::Windows::Forms::TextBox^ search_textBox;
	private: System::Windows::Forms::Button^ search_button;




	public:
	private:







	private:



	public:



	private:

	private: System::Windows::Forms::Panel^ bottom_panel;
	private: System::Windows::Forms::Button^ addContact_button;
	private: System::Windows::Forms::Panel^ addContact_panel;
	private: System::Windows::Forms::Button^ add_button;
	private: System::Windows::Forms::TextBox^ addCon_textBox;
	private: System::Windows::Forms::Label^ usernameInAddCon_label;
	private: System::Windows::Forms::PictureBox^ addCon_pictureBox;
	private: System::Windows::Forms::Panel^ sendMsg_panel;
	private: System::Windows::Forms::Button^ send_button;
	private: System::Windows::Forms::TextBox^ msg_textBox;








	private:

	private:






	private: System::Windows::Forms::Panel^ recievedMsg_panel;
	public: System::Windows::Forms::TextBox^ recMsg_textBox;
	public: System::Windows::Forms::Label^ sndrID_label;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ inactiveFav_button;
	private: System::Windows::Forms::Button^ activeFav_button;



	private:


	private:
	public:

	private:

	public:

	private: System::Windows::Forms::Panel^ sent_panel;



	private:

	public:

	private:

	private: System::Windows::Forms::Panel^ home_panel;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;




	private:





	private:


	private:
	public:

	private:


	private: System::Windows::Forms::Button^ prevRec_button;
	private: System::Windows::Forms::Button^ nextRec_button;
	private: System::Windows::Forms::Button^ nextFav_button;
	private: System::Windows::Forms::Button^ prevFav_button;
	private: System::Windows::Forms::Button^ logout_button;
	private: System::Windows::Forms::Panel^ logout_panel;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ logoutConfirm_button;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label5;




	private:


	private: System::Windows::Forms::Panel^ panel1;
	public:
	public: System::Windows::Forms::Label^ sndIDFav_label;
	private:
	private: System::Windows::Forms::Label^ label3;
	public:
	public: System::Windows::Forms::TextBox^ favMsg_textBox;
	private:
	private: System::Windows::Forms::Button^ activatedFav_button;
	public:

	private: System::Windows::Forms::Panel^ contactInContact_panel;
	private: System::Windows::Forms::Panel^ conInFLP_panel;
	private: System::Windows::Forms::Button^ sendMsg_button;
	public: System::Windows::Forms::Label^ userInFLP_label;
	private:
	private: System::Windows::Forms::PictureBox^ user_pictureBox;
	public:
	private: System::Windows::Forms::Panel^ search_panel;
	private: System::Windows::Forms::Button^ back_button;
	private: System::Windows::Forms::Panel^ conInsearch_panel;
	private: System::Windows::Forms::Button^ sendMsgInSearch_button;
	public: System::Windows::Forms::Label^ userInSearch_label;
	private:
	private: System::Windows::Forms::PictureBox^ inSearch_pictureBox;
	private: System::Windows::Forms::Button^ nextCon_button;
	private: System::Windows::Forms::Button^ previosCon_button;
	public:


	private:
	public:
	public:
	public:








	public:







	private:

	public:

	private:







	public:




	private:

	public:

	private:

	public:




	private:

	public:

	private:

	public:



	private:

	public:

	private:

	public:
	public:
	private:

	public:
	private:

	public:


	public:



	private:

	public:



	private:





	private:

	public:



	private:

	public:



	private:

	public:



	private:

	public:



	private:

	public:



	private:

	public:
	public:



	private:

	public:



	private:

	public:



	private:

	public:



	private:

	public:



	private:

	public:



	private:

	public:



	private:

	public:
	public:








	private:

	public:






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(pages::typeid));
			System::Windows::Forms::ListViewItem^ listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L""));
			this->upper_panel = (gcnew System::Windows::Forms::Panel());
			this->page_label = (gcnew System::Windows::Forms::Label());
			this->user_label = (gcnew System::Windows::Forms::Label());
			this->welcome_label = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->right_panel = (gcnew System::Windows::Forms::Panel());
			this->logout_button = (gcnew System::Windows::Forms::Button());
			this->home_button = (gcnew System::Windows::Forms::Button());
			this->receviesd_button = (gcnew System::Windows::Forms::Button());
			this->sent_button = (gcnew System::Windows::Forms::Button());
			this->fav_button = (gcnew System::Windows::Forms::Button());
			this->contact_button = (gcnew System::Windows::Forms::Button());
			this->container_panel = (gcnew System::Windows::Forms::Panel());
			this->sent_panel = (gcnew System::Windows::Forms::Panel());
			this->final_sent_panel = (gcnew System::Windows::Forms::Panel());
			this->message_panel = (gcnew System::Windows::Forms::Panel());
			this->textbox123 = (gcnew System::Windows::Forms::TextBox());
			this->contact = (gcnew System::Windows::Forms::Label());
			this->sentTo_label = (gcnew System::Windows::Forms::Label());
			this->undo_button = (gcnew System::Windows::Forms::Button());
			this->nextSent_button = (gcnew System::Windows::Forms::Button());
			this->prevSent_button = (gcnew System::Windows::Forms::Button());
			this->emptySent = (gcnew System::Windows::Forms::Panel());
			this->showMsg_button = (gcnew System::Windows::Forms::Button());
			this->home_panel = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->rec_panel = (gcnew System::Windows::Forms::Panel());
			this->emptyRec = (gcnew System::Windows::Forms::Panel());
			this->show_rec_button = (gcnew System::Windows::Forms::Button());
			this->chosenId_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->prevRec_button = (gcnew System::Windows::Forms::Button());
			this->nextRec_button = (gcnew System::Windows::Forms::Button());
			this->recievedMsg_panel = (gcnew System::Windows::Forms::Panel());
			this->sndrID_label = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->recMsg_textBox = (gcnew System::Windows::Forms::TextBox());
			this->inactiveFav_button = (gcnew System::Windows::Forms::Button());
			this->activeFav_button = (gcnew System::Windows::Forms::Button());
			this->fav_panel = (gcnew System::Windows::Forms::Panel());
			this->emptyFav = (gcnew System::Windows::Forms::Panel());
			this->showfav_button = (gcnew System::Windows::Forms::Button());
			this->nextFav_button = (gcnew System::Windows::Forms::Button());
			this->prevFav_button = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->sndIDFav_label = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->favMsg_textBox = (gcnew System::Windows::Forms::TextBox());
			this->activatedFav_button = (gcnew System::Windows::Forms::Button());
			this->contact_panel = (gcnew System::Windows::Forms::Panel());
			this->empty = (gcnew System::Windows::Forms::Panel());
			this->contactInContact_panel = (gcnew System::Windows::Forms::Panel());
			this->nextCon_button = (gcnew System::Windows::Forms::Button());
			this->previosCon_button = (gcnew System::Windows::Forms::Button());
			this->conInFLP_panel = (gcnew System::Windows::Forms::Panel());
			this->sendMsg_button = (gcnew System::Windows::Forms::Button());
			this->userInFLP_label = (gcnew System::Windows::Forms::Label());
			this->user_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->bottom_panel = (gcnew System::Windows::Forms::Panel());
			this->addContact_button = (gcnew System::Windows::Forms::Button());
			this->search_button = (gcnew System::Windows::Forms::Button());
			this->search_textBox = (gcnew System::Windows::Forms::TextBox());
			this->search_panel = (gcnew System::Windows::Forms::Panel());
			this->back_button = (gcnew System::Windows::Forms::Button());
			this->conInsearch_panel = (gcnew System::Windows::Forms::Panel());
			this->sendMsgInSearch_button = (gcnew System::Windows::Forms::Button());
			this->userInSearch_label = (gcnew System::Windows::Forms::Label());
			this->inSearch_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->sendMsg_panel = (gcnew System::Windows::Forms::Panel());
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->send_button = (gcnew System::Windows::Forms::Button());
			this->msg_textBox = (gcnew System::Windows::Forms::TextBox());
			this->logout_panel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->logoutConfirm_button = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->addContact_panel = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->addCon_textBox = (gcnew System::Windows::Forms::TextBox());
			this->usernameInAddCon_label = (gcnew System::Windows::Forms::Label());
			this->addCon_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->upper_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->right_panel->SuspendLayout();
			this->container_panel->SuspendLayout();
			this->sent_panel->SuspendLayout();
			this->final_sent_panel->SuspendLayout();
			this->message_panel->SuspendLayout();
			this->emptySent->SuspendLayout();
			this->home_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->rec_panel->SuspendLayout();
			this->emptyRec->SuspendLayout();
			this->panel2->SuspendLayout();
			this->recievedMsg_panel->SuspendLayout();
			this->fav_panel->SuspendLayout();
			this->emptyFav->SuspendLayout();
			this->panel1->SuspendLayout();
			this->contact_panel->SuspendLayout();
			this->contactInContact_panel->SuspendLayout();
			this->conInFLP_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_pictureBox))->BeginInit();
			this->bottom_panel->SuspendLayout();
			this->search_panel->SuspendLayout();
			this->conInsearch_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inSearch_pictureBox))->BeginInit();
			this->sendMsg_panel->SuspendLayout();
			this->logout_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->addContact_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addCon_pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// upper_panel
			// 
			this->upper_panel->Controls->Add(this->page_label);
			this->upper_panel->Controls->Add(this->user_label);
			this->upper_panel->Controls->Add(this->welcome_label);
			this->upper_panel->Controls->Add(this->pictureBox1);
			this->upper_panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->upper_panel->Location = System::Drawing::Point(0, 0);
			this->upper_panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->upper_panel->Name = L"upper_panel";
			this->upper_panel->Size = System::Drawing::Size(1068, 60);
			this->upper_panel->TabIndex = 0;
			this->upper_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &pages::upper_panel_Paint);
			// 
			// page_label
			// 
			this->page_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->page_label->AutoSize = true;
			this->page_label->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->page_label->Location = System::Drawing::Point(771, 16);
			this->page_label->Name = L"page_label";
			this->page_label->Size = System::Drawing::Size(0, 28);
			this->page_label->TabIndex = 11;
			this->page_label->Click += gcnew System::EventHandler(this, &pages::page_label_Click);
			// 
			// user_label
			// 
			this->user_label->AutoSize = true;
			this->user_label->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_label->Location = System::Drawing::Point(155, 16);
			this->user_label->Name = L"user_label";
			this->user_label->Size = System::Drawing::Size(75, 28);
			this->user_label->TabIndex = 10;
			this->user_label->Text = L"User";
			// 
			// welcome_label
			// 
			this->welcome_label->AutoSize = true;
			this->welcome_label->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcome_label->Location = System::Drawing::Point(3, 16);
			this->welcome_label->Name = L"welcome_label";
			this->welcome_label->Size = System::Drawing::Size(142, 28);
			this->welcome_label->TabIndex = 9;
			this->welcome_label->Text = L"Welcome,";
			this->welcome_label->Click += gcnew System::EventHandler(this, &pages::welcome_label_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1068, 60);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &pages::pictureBox1_Click);
			// 
			// right_panel
			// 
			this->right_panel->Controls->Add(this->logout_button);
			this->right_panel->Controls->Add(this->home_button);
			this->right_panel->Controls->Add(this->receviesd_button);
			this->right_panel->Controls->Add(this->sent_button);
			this->right_panel->Controls->Add(this->fav_button);
			this->right_panel->Controls->Add(this->contact_button);
			this->right_panel->Dock = System::Windows::Forms::DockStyle::Left;
			this->right_panel->Location = System::Drawing::Point(0, 60);
			this->right_panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->right_panel->Name = L"right_panel";
			this->right_panel->Size = System::Drawing::Size(128, 614);
			this->right_panel->TabIndex = 1;
			// 
			// logout_button
			// 
			this->logout_button->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->logout_button->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->logout_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logout_button.BackgroundImage")));
			this->logout_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->logout_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->logout_button->FlatAppearance->BorderSize = 0;
			this->logout_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logout_button->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logout_button->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->logout_button->Location = System::Drawing::Point(20, 527);
			this->logout_button->Margin = System::Windows::Forms::Padding(7, 20, 7, 20);
			this->logout_button->Name = L"logout_button";
			this->logout_button->Size = System::Drawing::Size(89, 58);
			this->logout_button->TabIndex = 9;
			this->logout_button->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->logout_button->UseVisualStyleBackColor = false;
			this->logout_button->Click += gcnew System::EventHandler(this, &pages::logout_button_Click);
			// 
			// home_button
			// 
			this->home_button->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->home_button->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->home_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"home_button.BackgroundImage")));
			this->home_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->home_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->home_button->FlatAppearance->BorderSize = 0;
			this->home_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->home_button->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_button->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->home_button->Location = System::Drawing::Point(20, 37);
			this->home_button->Margin = System::Windows::Forms::Padding(7, 20, 7, 20);
			this->home_button->Name = L"home_button";
			this->home_button->Size = System::Drawing::Size(89, 58);
			this->home_button->TabIndex = 8;
			this->home_button->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->home_button->UseVisualStyleBackColor = false;
			this->home_button->Click += gcnew System::EventHandler(this, &pages::home_button_Click);
			// 
			// receviesd_button
			// 
			this->receviesd_button->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->receviesd_button->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->receviesd_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"receviesd_button.BackgroundImage")));
			this->receviesd_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->receviesd_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->receviesd_button->FlatAppearance->BorderSize = 0;
			this->receviesd_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->receviesd_button->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->receviesd_button->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->receviesd_button->Location = System::Drawing::Point(20, 429);
			this->receviesd_button->Margin = System::Windows::Forms::Padding(7, 20, 7, 20);
			this->receviesd_button->Name = L"receviesd_button";
			this->receviesd_button->Size = System::Drawing::Size(89, 58);
			this->receviesd_button->TabIndex = 7;
			this->receviesd_button->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->receviesd_button->UseVisualStyleBackColor = false;
			this->receviesd_button->Click += gcnew System::EventHandler(this, &pages::receviesd_button_Click);
			// 
			// sent_button
			// 
			this->sent_button->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->sent_button->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->sent_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sent_button.BackgroundImage")));
			this->sent_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->sent_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sent_button->FlatAppearance->BorderSize = 0;
			this->sent_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sent_button->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sent_button->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->sent_button->Location = System::Drawing::Point(20, 331);
			this->sent_button->Margin = System::Windows::Forms::Padding(7, 20, 7, 20);
			this->sent_button->Name = L"sent_button";
			this->sent_button->Size = System::Drawing::Size(89, 58);
			this->sent_button->TabIndex = 6;
			this->sent_button->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->sent_button->UseVisualStyleBackColor = false;
			this->sent_button->Click += gcnew System::EventHandler(this, &pages::sent_button_Click);
			// 
			// fav_button
			// 
			this->fav_button->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->fav_button->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->fav_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fav_button.BackgroundImage")));
			this->fav_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->fav_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fav_button->FlatAppearance->BorderSize = 0;
			this->fav_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fav_button->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fav_button->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->fav_button->Location = System::Drawing::Point(20, 233);
			this->fav_button->Margin = System::Windows::Forms::Padding(7, 20, 7, 20);
			this->fav_button->Name = L"fav_button";
			this->fav_button->Size = System::Drawing::Size(89, 58);
			this->fav_button->TabIndex = 5;
			this->fav_button->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->fav_button->UseVisualStyleBackColor = false;
			this->fav_button->Click += gcnew System::EventHandler(this, &pages::Fav_button_Click);
			// 
			// contact_button
			// 
			this->contact_button->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->contact_button->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->contact_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"contact_button.BackgroundImage")));
			this->contact_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->contact_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->contact_button->FlatAppearance->BorderSize = 0;
			this->contact_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->contact_button->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contact_button->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->contact_button->Location = System::Drawing::Point(20, 135);
			this->contact_button->Margin = System::Windows::Forms::Padding(7, 20, 7, 20);
			this->contact_button->Name = L"contact_button";
			this->contact_button->Size = System::Drawing::Size(89, 58);
			this->contact_button->TabIndex = 4;
			this->contact_button->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->contact_button->UseVisualStyleBackColor = false;
			this->contact_button->Click += gcnew System::EventHandler(this, &pages::contact_button_Click);
			// 
			// container_panel
			// 
			this->container_panel->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->container_panel->Controls->Add(this->home_panel);
			this->container_panel->Controls->Add(this->sent_panel);
			this->container_panel->Controls->Add(this->rec_panel);
			this->container_panel->Controls->Add(this->fav_panel);
			this->container_panel->Controls->Add(this->contact_panel);
			this->container_panel->Controls->Add(this->sendMsg_panel);
			this->container_panel->Controls->Add(this->logout_panel);
			this->container_panel->Controls->Add(this->addContact_panel);
			this->container_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->container_panel->Location = System::Drawing::Point(128, 60);
			this->container_panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->container_panel->Name = L"container_panel";
			this->container_panel->Size = System::Drawing::Size(940, 614);
			this->container_panel->TabIndex = 2;
			// 
			// sent_panel
			// 
			this->sent_panel->BackColor = System::Drawing::SystemColors::Highlight;
			this->sent_panel->Controls->Add(this->emptySent);
			this->sent_panel->Controls->Add(this->final_sent_panel);
			this->sent_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->sent_panel->Location = System::Drawing::Point(0, 0);
			this->sent_panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sent_panel->Name = L"sent_panel";
			this->sent_panel->Size = System::Drawing::Size(940, 614);
			this->sent_panel->TabIndex = 10;
			// 
			// final_sent_panel
			// 
			this->final_sent_panel->BackColor = System::Drawing::SystemColors::Highlight;
			this->final_sent_panel->Controls->Add(this->message_panel);
			this->final_sent_panel->Controls->Add(this->nextSent_button);
			this->final_sent_panel->Controls->Add(this->prevSent_button);
			this->final_sent_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->final_sent_panel->Location = System::Drawing::Point(0, 0);
			this->final_sent_panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->final_sent_panel->Name = L"final_sent_panel";
			this->final_sent_panel->Size = System::Drawing::Size(940, 614);
			this->final_sent_panel->TabIndex = 17;
			// 
			// message_panel
			// 
			this->message_panel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->message_panel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->message_panel->Controls->Add(this->textbox123);
			this->message_panel->Controls->Add(this->contact);
			this->message_panel->Controls->Add(this->sentTo_label);
			this->message_panel->Controls->Add(this->undo_button);
			this->message_panel->Location = System::Drawing::Point(139, 0);
			this->message_panel->Margin = System::Windows::Forms::Padding(20);
			this->message_panel->Name = L"message_panel";
			this->message_panel->Size = System::Drawing::Size(662, 614);
			this->message_panel->TabIndex = 12;
			// 
			// textbox123
			// 
			this->textbox123->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textbox123->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textbox123->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textbox123->Location = System::Drawing::Point(40, 99);
			this->textbox123->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textbox123->Multiline = true;
			this->textbox123->Name = L"textbox123";
			this->textbox123->ReadOnly = true;
			this->textbox123->Size = System::Drawing::Size(590, 456);
			this->textbox123->TabIndex = 0;
			this->textbox123->Text = L"Message sent to user";
			this->textbox123->TextChanged += gcnew System::EventHandler(this, &pages::sentMsg_textBox_TextChanged_1);
			// 
			// contact
			// 
			this->contact->AutoSize = true;
			this->contact->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contact->Location = System::Drawing::Point(163, 43);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(135, 28);
			this->contact->TabIndex = 12;
			this->contact->Text = L"contact";
			this->contact->Click += gcnew System::EventHandler(this, &pages::contact_label_Click_1);
			// 
			// sentTo_label
			// 
			this->sentTo_label->AutoSize = true;
			this->sentTo_label->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sentTo_label->Location = System::Drawing::Point(35, 44);
			this->sentTo_label->Name = L"sentTo_label";
			this->sentTo_label->Size = System::Drawing::Size(130, 28);
			this->sentTo_label->TabIndex = 11;
			this->sentTo_label->Text = L"Sent to: ";
			// 
			// undo_button
			// 
			this->undo_button->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->undo_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"undo_button.BackgroundImage")));
			this->undo_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->undo_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->undo_button->FlatAppearance->BorderSize = 0;
			this->undo_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->undo_button->Location = System::Drawing::Point(557, 18);
			this->undo_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->undo_button->Name = L"undo_button";
			this->undo_button->Size = System::Drawing::Size(73, 62);
			this->undo_button->TabIndex = 14;
			this->undo_button->UseVisualStyleBackColor = false;
			this->undo_button->Click += gcnew System::EventHandler(this, &pages::undo_button_Click_1);
			// 
			// nextSent_button
			// 
			this->nextSent_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->nextSent_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextSent_button.BackgroundImage")));
			this->nextSent_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->nextSent_button->Dock = System::Windows::Forms::DockStyle::Right;
			this->nextSent_button->FlatAppearance->BorderSize = 0;
			this->nextSent_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nextSent_button->Location = System::Drawing::Point(802, 0);
			this->nextSent_button->Name = L"nextSent_button";
			this->nextSent_button->Size = System::Drawing::Size(138, 614);
			this->nextSent_button->TabIndex = 11;
			this->nextSent_button->UseVisualStyleBackColor = false;
			this->nextSent_button->Visible = false;
			this->nextSent_button->Click += gcnew System::EventHandler(this, &pages::nextSent_button_Click_1);
			// 
			// prevSent_button
			// 
			this->prevSent_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->prevSent_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prevSent_button.BackgroundImage")));
			this->prevSent_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->prevSent_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->prevSent_button->FlatAppearance->BorderSize = 0;
			this->prevSent_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prevSent_button->Location = System::Drawing::Point(0, 0);
			this->prevSent_button->Name = L"prevSent_button";
			this->prevSent_button->Size = System::Drawing::Size(138, 614);
			this->prevSent_button->TabIndex = 10;
			this->prevSent_button->UseVisualStyleBackColor = false;
			this->prevSent_button->Visible = false;
			this->prevSent_button->Click += gcnew System::EventHandler(this, &pages::prevSent_button_Click_1);
			// 
			// emptySent
			// 
			this->emptySent->AutoSize = true;
			this->emptySent->BackColor = System::Drawing::SystemColors::Highlight;
			this->emptySent->Controls->Add(this->showMsg_button);
			this->emptySent->Location = System::Drawing::Point(-9, 0);
			this->emptySent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->emptySent->Name = L"emptySent";
			this->emptySent->Size = System::Drawing::Size(1023, 810);
			this->emptySent->TabIndex = 16;
			// 
			// showMsg_button
			// 
			this->showMsg_button->Location = System::Drawing::Point(348, 212);
			this->showMsg_button->Name = L"showMsg_button";
			this->showMsg_button->Size = System::Drawing::Size(282, 154);
			this->showMsg_button->TabIndex = 0;
			this->showMsg_button->Text = L"Show sent messages";
			this->showMsg_button->UseVisualStyleBackColor = true;
			this->showMsg_button->Click += gcnew System::EventHandler(this, &pages::showMsg_button_Click);
			// 
			// home_panel
			// 
			this->home_panel->BackColor = System::Drawing::SystemColors::Highlight;
			this->home_panel->Controls->Add(this->label4);
			this->home_panel->Controls->Add(this->pictureBox2);
			this->home_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->home_panel->Location = System::Drawing::Point(0, 0);
			this->home_panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->home_panel->Name = L"home_panel";
			this->home_panel->Size = System::Drawing::Size(940, 614);
			this->home_panel->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(268, 68);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(335, 36);
			this->label4->TabIndex = 14;
			this->label4->Text = L"the new sarahaa";
			this->label4->Click += gcnew System::EventHandler(this, &pages::label4_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(201, 82);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(448, 454);
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &pages::pictureBox2_Click);
			// 
			// rec_panel
			// 
			this->rec_panel->BackColor = System::Drawing::SystemColors::Highlight;
			this->rec_panel->Controls->Add(this->emptyRec);
			this->rec_panel->Controls->Add(this->panel2);
			this->rec_panel->Controls->Add(this->recievedMsg_panel);
			this->rec_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->rec_panel->Location = System::Drawing::Point(0, 0);
			this->rec_panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rec_panel->Name = L"rec_panel";
			this->rec_panel->Size = System::Drawing::Size(940, 614);
			this->rec_panel->TabIndex = 5;
			// 
			// emptyRec
			// 
			this->emptyRec->BackColor = System::Drawing::SystemColors::Highlight;
			this->emptyRec->Controls->Add(this->show_rec_button);
			this->emptyRec->Controls->Add(this->chosenId_textBox);
			this->emptyRec->Controls->Add(this->label1);
			this->emptyRec->Controls->Add(this->listView1);
			this->emptyRec->Location = System::Drawing::Point(0, -14);
			this->emptyRec->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->emptyRec->Name = L"emptyRec";
			this->emptyRec->Size = System::Drawing::Size(1014, 742);
			this->emptyRec->TabIndex = 16;
			// 
			// show_rec_button
			// 
			this->show_rec_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->show_rec_button->Location = System::Drawing::Point(266, 499);
			this->show_rec_button->Name = L"show_rec_button";
			this->show_rec_button->Size = System::Drawing::Size(354, 65);
			this->show_rec_button->TabIndex = 12;
			this->show_rec_button->Text = L"Show recieved messages";
			this->show_rec_button->UseVisualStyleBackColor = true;
			this->show_rec_button->Click += gcnew System::EventHandler(this, &pages::show_rec_button_Click);
			// 
			// chosenId_textBox
			// 
			this->chosenId_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chosenId_textBox->Location = System::Drawing::Point(113, 410);
			this->chosenId_textBox->Multiline = true;
			this->chosenId_textBox->Name = L"chosenId_textBox";
			this->chosenId_textBox->Size = System::Drawing::Size(193, 44);
			this->chosenId_textBox->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(73, 352);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(662, 28);
			this->label1->TabIndex = 10;
			this->label1->Text = L"choose id you want to show his/her messages";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->columnHeader1 });
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->HideSelection = false;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { listViewItem1 });
			this->listView1->Location = System::Drawing::Point(78, 62);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(766, 234);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &pages::listView1_SelectedIndexChanged_1);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Highlight;
			this->panel2->Controls->Add(this->prevRec_button);
			this->panel2->Controls->Add(this->nextRec_button);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(940, 628);
			this->panel2->TabIndex = 17;
			// 
			// prevRec_button
			// 
			this->prevRec_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->prevRec_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prevRec_button.BackgroundImage")));
			this->prevRec_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->prevRec_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->prevRec_button->FlatAppearance->BorderSize = 0;
			this->prevRec_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prevRec_button->Location = System::Drawing::Point(0, 0);
			this->prevRec_button->Name = L"prevRec_button";
			this->prevRec_button->Size = System::Drawing::Size(138, 628);
			this->prevRec_button->TabIndex = 10;
			this->prevRec_button->UseVisualStyleBackColor = false;
			this->prevRec_button->Visible = false;
			this->prevRec_button->Click += gcnew System::EventHandler(this, &pages::prevRec_button_Click);
			// 
			// nextRec_button
			// 
			this->nextRec_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->nextRec_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextRec_button.BackgroundImage")));
			this->nextRec_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->nextRec_button->Dock = System::Windows::Forms::DockStyle::Right;
			this->nextRec_button->FlatAppearance->BorderSize = 0;
			this->nextRec_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nextRec_button->Location = System::Drawing::Point(802, 0);
			this->nextRec_button->Name = L"nextRec_button";
			this->nextRec_button->Size = System::Drawing::Size(138, 628);
			this->nextRec_button->TabIndex = 9;
			this->nextRec_button->UseVisualStyleBackColor = false;
			this->nextRec_button->Visible = false;
			this->nextRec_button->Click += gcnew System::EventHandler(this, &pages::nextRec_button_Click);
			// 
			// recievedMsg_panel
			// 
			this->recievedMsg_panel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->recievedMsg_panel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->recievedMsg_panel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->recievedMsg_panel->Controls->Add(this->sndrID_label);
			this->recievedMsg_panel->Controls->Add(this->label2);
			this->recievedMsg_panel->Controls->Add(this->recMsg_textBox);
			this->recievedMsg_panel->Controls->Add(this->inactiveFav_button);
			this->recievedMsg_panel->Controls->Add(this->activeFav_button);
			this->recievedMsg_panel->Location = System::Drawing::Point(127, 0);
			this->recievedMsg_panel->Margin = System::Windows::Forms::Padding(20);
			this->recievedMsg_panel->Name = L"recievedMsg_panel";
			this->recievedMsg_panel->Size = System::Drawing::Size(684, 631);
			this->recievedMsg_panel->TabIndex = 0;
			this->recievedMsg_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &pages::recievedMsg_panel_Paint);
			// 
			// sndrID_label
			// 
			this->sndrID_label->AutoSize = true;
			this->sndrID_label->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sndrID_label->Location = System::Drawing::Point(183, 44);
			this->sndrID_label->Name = L"sndrID_label";
			this->sndrID_label->Size = System::Drawing::Size(39, 28);
			this->sndrID_label->TabIndex = 12;
			this->sndrID_label->Text = L"ID";
			this->sndrID_label->Click += gcnew System::EventHandler(this, &pages::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 28);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Sender ID: ";
			this->label2->Click += gcnew System::EventHandler(this, &pages::label2_Click);
			// 
			// recMsg_textBox
			// 
			this->recMsg_textBox->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->recMsg_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->recMsg_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->recMsg_textBox->Location = System::Drawing::Point(52, 120);
			this->recMsg_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->recMsg_textBox->Multiline = true;
			this->recMsg_textBox->Name = L"recMsg_textBox";
			this->recMsg_textBox->ReadOnly = true;
			this->recMsg_textBox->Size = System::Drawing::Size(575, 453);
			this->recMsg_textBox->TabIndex = 0;
			this->recMsg_textBox->Text = L"Recieved Message";
			// 
			// inactiveFav_button
			// 
			this->inactiveFav_button->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->inactiveFav_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"inactiveFav_button.BackgroundImage")));
			this->inactiveFav_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->inactiveFav_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->inactiveFav_button->FlatAppearance->BorderSize = 0;
			this->inactiveFav_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->inactiveFav_button->Location = System::Drawing::Point(569, 30);
			this->inactiveFav_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->inactiveFav_button->Name = L"inactiveFav_button";
			this->inactiveFav_button->Size = System::Drawing::Size(73, 62);
			this->inactiveFav_button->TabIndex = 13;
			this->inactiveFav_button->UseVisualStyleBackColor = false;
			this->inactiveFav_button->Click += gcnew System::EventHandler(this, &pages::inactiveFav_button_Click);
			// 
			// activeFav_button
			// 
			this->activeFav_button->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->activeFav_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"activeFav_button.BackgroundImage")));
			this->activeFav_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->activeFav_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->activeFav_button->FlatAppearance->BorderSize = 0;
			this->activeFav_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->activeFav_button->Location = System::Drawing::Point(569, 28);
			this->activeFav_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->activeFav_button->Name = L"activeFav_button";
			this->activeFav_button->Size = System::Drawing::Size(73, 62);
			this->activeFav_button->TabIndex = 14;
			this->activeFav_button->UseVisualStyleBackColor = false;
			this->activeFav_button->Click += gcnew System::EventHandler(this, &pages::activeFav_button_Click);
			// 
			// fav_panel
			// 
			this->fav_panel->BackColor = System::Drawing::SystemColors::Highlight;
			this->fav_panel->Controls->Add(this->emptyFav);
			this->fav_panel->Controls->Add(this->nextFav_button);
			this->fav_panel->Controls->Add(this->prevFav_button);
			this->fav_panel->Controls->Add(this->panel1);
			this->fav_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->fav_panel->Location = System::Drawing::Point(0, 0);
			this->fav_panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->fav_panel->Name = L"fav_panel";
			this->fav_panel->Size = System::Drawing::Size(940, 614);
			this->fav_panel->TabIndex = 3;
			// 
			// emptyFav
			// 
			this->emptyFav->BackColor = System::Drawing::SystemColors::Highlight;
			this->emptyFav->Controls->Add(this->showfav_button);
			this->emptyFav->Location = System::Drawing::Point(-6, -12);
			this->emptyFav->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->emptyFav->Name = L"emptyFav";
			this->emptyFav->Size = System::Drawing::Size(1115, 667);
			this->emptyFav->TabIndex = 16;
			// 
			// showfav_button
			// 
			this->showfav_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showfav_button->Location = System::Drawing::Point(286, 204);
			this->showfav_button->Name = L"showfav_button";
			this->showfav_button->Size = System::Drawing::Size(408, 225);
			this->showfav_button->TabIndex = 0;
			this->showfav_button->Text = L"Show your favoraties ";
			this->showfav_button->UseVisualStyleBackColor = true;
			this->showfav_button->Click += gcnew System::EventHandler(this, &pages::showfav_button_Click);
			// 
			// nextFav_button
			// 
			this->nextFav_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->nextFav_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextFav_button.BackgroundImage")));
			this->nextFav_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->nextFav_button->Dock = System::Windows::Forms::DockStyle::Right;
			this->nextFav_button->FlatAppearance->BorderSize = 0;
			this->nextFav_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nextFav_button->Location = System::Drawing::Point(802, 0);
			this->nextFav_button->Name = L"nextFav_button";
			this->nextFav_button->Size = System::Drawing::Size(138, 614);
			this->nextFav_button->TabIndex = 11;
			this->nextFav_button->UseVisualStyleBackColor = false;
			this->nextFav_button->Visible = false;
			this->nextFav_button->Click += gcnew System::EventHandler(this, &pages::nextFav_button_Click);
			// 
			// prevFav_button
			// 
			this->prevFav_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->prevFav_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prevFav_button.BackgroundImage")));
			this->prevFav_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->prevFav_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->prevFav_button->FlatAppearance->BorderSize = 0;
			this->prevFav_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prevFav_button->Location = System::Drawing::Point(0, 0);
			this->prevFav_button->Name = L"prevFav_button";
			this->prevFav_button->Size = System::Drawing::Size(138, 614);
			this->prevFav_button->TabIndex = 10;
			this->prevFav_button->UseVisualStyleBackColor = false;
			this->prevFav_button->Visible = false;
			this->prevFav_button->Click += gcnew System::EventHandler(this, &pages::prevFav_button_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->sndIDFav_label);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->favMsg_textBox);
			this->panel1->Controls->Add(this->activatedFav_button);
			this->panel1->Location = System::Drawing::Point(127, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(20);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(684, 671);
			this->panel1->TabIndex = 0;
			// 
			// sndIDFav_label
			// 
			this->sndIDFav_label->AutoSize = true;
			this->sndIDFav_label->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sndIDFav_label->Location = System::Drawing::Point(183, 38);
			this->sndIDFav_label->Name = L"sndIDFav_label";
			this->sndIDFav_label->Size = System::Drawing::Size(39, 28);
			this->sndIDFav_label->TabIndex = 12;
			this->sndIDFav_label->Text = L"ID";
			this->sndIDFav_label->Click += gcnew System::EventHandler(this, &pages::sndIDFav_label_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(30, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 28);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Sender ID: ";
			// 
			// favMsg_textBox
			// 
			this->favMsg_textBox->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->favMsg_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->favMsg_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->favMsg_textBox->Location = System::Drawing::Point(35, 84);
			this->favMsg_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->favMsg_textBox->Multiline = true;
			this->favMsg_textBox->Name = L"favMsg_textBox";
			this->favMsg_textBox->ReadOnly = true;
			this->favMsg_textBox->Size = System::Drawing::Size(607, 489);
			this->favMsg_textBox->TabIndex = 0;
			this->favMsg_textBox->Text = L"Favorite recevied message";
			this->favMsg_textBox->TextChanged += gcnew System::EventHandler(this, &pages::favMsg_textBox_TextChanged);
			// 
			// activatedFav_button
			// 
			this->activatedFav_button->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->activatedFav_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"activatedFav_button.BackgroundImage")));
			this->activatedFav_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->activatedFav_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->activatedFav_button->FlatAppearance->BorderSize = 0;
			this->activatedFav_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->activatedFav_button->Location = System::Drawing::Point(569, 25);
			this->activatedFav_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->activatedFav_button->Name = L"activatedFav_button";
			this->activatedFav_button->Size = System::Drawing::Size(73, 62);
			this->activatedFav_button->TabIndex = 14;
			this->activatedFav_button->UseVisualStyleBackColor = false;
			this->activatedFav_button->Click += gcnew System::EventHandler(this, &pages::activatedFav_button_Click);
			// 
			// contact_panel
			// 
			this->contact_panel->BackColor = System::Drawing::SystemColors::Highlight;
			this->contact_panel->Controls->Add(this->empty);
			this->contact_panel->Controls->Add(this->contactInContact_panel);
			this->contact_panel->Controls->Add(this->bottom_panel);
			this->contact_panel->Controls->Add(this->search_button);
			this->contact_panel->Controls->Add(this->search_textBox);
			this->contact_panel->Controls->Add(this->search_panel);
			this->contact_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->contact_panel->Location = System::Drawing::Point(0, 0);
			this->contact_panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->contact_panel->Name = L"contact_panel";
			this->contact_panel->Size = System::Drawing::Size(940, 614);
			this->contact_panel->TabIndex = 6;
			// 
			// empty
			// 
			this->empty->BackColor = System::Drawing::SystemColors::Highlight;
			this->empty->Location = System::Drawing::Point(0, 64);
			this->empty->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->empty->Name = L"empty";
			this->empty->Size = System::Drawing::Size(940, 487);
			this->empty->TabIndex = 15;
			// 
			// contactInContact_panel
			// 
			this->contactInContact_panel->BackColor = System::Drawing::SystemColors::Highlight;
			this->contactInContact_panel->Controls->Add(this->nextCon_button);
			this->contactInContact_panel->Controls->Add(this->previosCon_button);
			this->contactInContact_panel->Controls->Add(this->conInFLP_panel);
			this->contactInContact_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->contactInContact_panel->Location = System::Drawing::Point(0, 48);
			this->contactInContact_panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->contactInContact_panel->Name = L"contactInContact_panel";
			this->contactInContact_panel->Size = System::Drawing::Size(940, 487);
			this->contactInContact_panel->TabIndex = 12;
			// 
			// nextCon_button
			// 
			this->nextCon_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->nextCon_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextCon_button.BackgroundImage")));
			this->nextCon_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->nextCon_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->nextCon_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nextCon_button->Location = System::Drawing::Point(775, 186);
			this->nextCon_button->Name = L"nextCon_button";
			this->nextCon_button->Size = System::Drawing::Size(108, 116);
			this->nextCon_button->TabIndex = 6;
			this->nextCon_button->Text = L"Next";
			this->nextCon_button->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->nextCon_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->nextCon_button->UseVisualStyleBackColor = false;
			this->nextCon_button->Visible = false;
			this->nextCon_button->Click += gcnew System::EventHandler(this, &pages::nextCon_button_Click);
			// 
			// previosCon_button
			// 
			this->previosCon_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->previosCon_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"previosCon_button.BackgroundImage")));
			this->previosCon_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->previosCon_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->previosCon_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->previosCon_button->Location = System::Drawing::Point(87, 186);
			this->previosCon_button->Name = L"previosCon_button";
			this->previosCon_button->Size = System::Drawing::Size(108, 116);
			this->previosCon_button->TabIndex = 5;
			this->previosCon_button->Text = L"Previous";
			this->previosCon_button->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->previosCon_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->previosCon_button->UseVisualStyleBackColor = false;
			this->previosCon_button->Visible = false;
			this->previosCon_button->Click += gcnew System::EventHandler(this, &pages::previosCon_button_Click);
			// 
			// conInFLP_panel
			// 
			this->conInFLP_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->conInFLP_panel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->conInFLP_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->conInFLP_panel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->conInFLP_panel->Controls->Add(this->sendMsg_button);
			this->conInFLP_panel->Controls->Add(this->userInFLP_label);
			this->conInFLP_panel->Controls->Add(this->user_pictureBox);
			this->conInFLP_panel->Location = System::Drawing::Point(309, 74);
			this->conInFLP_panel->Margin = System::Windows::Forms::Padding(19, 18, 19, 18);
			this->conInFLP_panel->Name = L"conInFLP_panel";
			this->conInFLP_panel->Padding = System::Windows::Forms::Padding(15);
			this->conInFLP_panel->Size = System::Drawing::Size(340, 311);
			this->conInFLP_panel->TabIndex = 4;
			this->conInFLP_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &pages::conInFLP_panel_Paint_1);
			// 
			// sendMsg_button
			// 
			this->sendMsg_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->sendMsg_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sendMsg_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sendMsg_button->Location = System::Drawing::Point(79, 247);
			this->sendMsg_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sendMsg_button->Name = L"sendMsg_button";
			this->sendMsg_button->Size = System::Drawing::Size(192, 37);
			this->sendMsg_button->TabIndex = 12;
			this->sendMsg_button->Text = L"Send Message";
			this->sendMsg_button->UseVisualStyleBackColor = true;
			this->sendMsg_button->Click += gcnew System::EventHandler(this, &pages::sendMsg_button_Click_2);
			// 
			// userInFLP_label
			// 
			this->userInFLP_label->AutoSize = true;
			this->userInFLP_label->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userInFLP_label->Location = System::Drawing::Point(125, 193);
			this->userInFLP_label->Margin = System::Windows::Forms::Padding(5);
			this->userInFLP_label->Name = L"userInFLP_label";
			this->userInFLP_label->Padding = System::Windows::Forms::Padding(5);
			this->userInFLP_label->Size = System::Drawing::Size(85, 38);
			this->userInFLP_label->TabIndex = 11;
			this->userInFLP_label->Text = L"User";
			this->userInFLP_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->userInFLP_label->Click += gcnew System::EventHandler(this, &pages::userInFLP_label_Click);
			// 
			// user_pictureBox
			// 
			this->user_pictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"user_pictureBox.BackgroundImage")));
			this->user_pictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->user_pictureBox->Location = System::Drawing::Point(103, 38);
			this->user_pictureBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->user_pictureBox->Name = L"user_pictureBox";
			this->user_pictureBox->Size = System::Drawing::Size(136, 129);
			this->user_pictureBox->TabIndex = 0;
			this->user_pictureBox->TabStop = false;
			// 
			// bottom_panel
			// 
			this->bottom_panel->Controls->Add(this->addContact_button);
			this->bottom_panel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->bottom_panel->Location = System::Drawing::Point(0, 535);
			this->bottom_panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bottom_panel->Name = L"bottom_panel";
			this->bottom_panel->Size = System::Drawing::Size(940, 79);
			this->bottom_panel->TabIndex = 8;
			// 
			// addContact_button
			// 
			this->addContact_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addContact_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addContact_button->Location = System::Drawing::Point(227, 15);
			this->addContact_button->Margin = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->addContact_button->Name = L"addContact_button";
			this->addContact_button->Size = System::Drawing::Size(461, 54);
			this->addContact_button->TabIndex = 0;
			this->addContact_button->Text = L"Add New Contact";
			this->addContact_button->UseVisualStyleBackColor = true;
			this->addContact_button->Click += gcnew System::EventHandler(this, &pages::addContact_button_Click);
			// 
			// search_button
			// 
			this->search_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->search_button->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->search_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_button.BackgroundImage")));
			this->search_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->search_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->search_button->FlatAppearance->BorderSize = 0;
			this->search_button->Location = System::Drawing::Point(863, 0);
			this->search_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->search_button->Name = L"search_button";
			this->search_button->Size = System::Drawing::Size(77, 50);
			this->search_button->TabIndex = 2;
			this->search_button->UseVisualStyleBackColor = false;
			this->search_button->Click += gcnew System::EventHandler(this, &pages::search_button_Click);
			// 
			// search_textBox
			// 
			this->search_textBox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->search_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->search_textBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->search_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_textBox->Location = System::Drawing::Point(0, 0);
			this->search_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->search_textBox->Name = L"search_textBox";
			this->search_textBox->Size = System::Drawing::Size(940, 48);
			this->search_textBox->TabIndex = 0;
			// 
			// search_panel
			// 
			this->search_panel->BackColor = System::Drawing::SystemColors::Highlight;
			this->search_panel->Controls->Add(this->back_button);
			this->search_panel->Controls->Add(this->conInsearch_panel);
			this->search_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->search_panel->Location = System::Drawing::Point(0, 0);
			this->search_panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->search_panel->Name = L"search_panel";
			this->search_panel->Size = System::Drawing::Size(940, 614);
			this->search_panel->TabIndex = 10;
			// 
			// back_button
			// 
			this->back_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->back_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back_button.BackgroundImage")));
			this->back_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->back_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->back_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->back_button->Location = System::Drawing::Point(786, 166);
			this->back_button->Name = L"back_button";
			this->back_button->Size = System::Drawing::Size(108, 116);
			this->back_button->TabIndex = 3;
			this->back_button->Text = L"Go Back";
			this->back_button->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->back_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->back_button->UseVisualStyleBackColor = false;
			this->back_button->Click += gcnew System::EventHandler(this, &pages::button2_Click);
			// 
			// conInsearch_panel
			// 
			this->conInsearch_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->conInsearch_panel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->conInsearch_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->conInsearch_panel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->conInsearch_panel->Controls->Add(this->sendMsgInSearch_button);
			this->conInsearch_panel->Controls->Add(this->userInSearch_label);
			this->conInsearch_panel->Controls->Add(this->inSearch_pictureBox);
			this->conInsearch_panel->Location = System::Drawing::Point(255, 177);
			this->conInsearch_panel->Margin = System::Windows::Forms::Padding(19, 18, 19, 18);
			this->conInsearch_panel->Name = L"conInsearch_panel";
			this->conInsearch_panel->Size = System::Drawing::Size(331, 298);
			this->conInsearch_panel->TabIndex = 2;
			// 
			// sendMsgInSearch_button
			// 
			this->sendMsgInSearch_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->sendMsgInSearch_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sendMsgInSearch_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sendMsgInSearch_button->Location = System::Drawing::Point(60, 231);
			this->sendMsgInSearch_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sendMsgInSearch_button->Name = L"sendMsgInSearch_button";
			this->sendMsgInSearch_button->Size = System::Drawing::Size(213, 37);
			this->sendMsgInSearch_button->TabIndex = 12;
			this->sendMsgInSearch_button->Text = L"Send Message";
			this->sendMsgInSearch_button->UseVisualStyleBackColor = true;
			this->sendMsgInSearch_button->Click += gcnew System::EventHandler(this, &pages::sendMsgInSearch_button_Click);
			// 
			// userInSearch_label
			// 
			this->userInSearch_label->AutoSize = true;
			this->userInSearch_label->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userInSearch_label->Location = System::Drawing::Point(121, 172);
			this->userInSearch_label->Margin = System::Windows::Forms::Padding(5);
			this->userInSearch_label->Name = L"userInSearch_label";
			this->userInSearch_label->Padding = System::Windows::Forms::Padding(5);
			this->userInSearch_label->Size = System::Drawing::Size(85, 38);
			this->userInSearch_label->TabIndex = 11;
			this->userInSearch_label->Text = L"User";
			this->userInSearch_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->userInSearch_label->Click += gcnew System::EventHandler(this, &pages::userInSearch_label_Click);
			// 
			// inSearch_pictureBox
			// 
			this->inSearch_pictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"inSearch_pictureBox.BackgroundImage")));
			this->inSearch_pictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->inSearch_pictureBox->Location = System::Drawing::Point(96, 16);
			this->inSearch_pictureBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->inSearch_pictureBox->Name = L"inSearch_pictureBox";
			this->inSearch_pictureBox->Size = System::Drawing::Size(136, 129);
			this->inSearch_pictureBox->TabIndex = 0;
			this->inSearch_pictureBox->TabStop = false;
			// 
			// sendMsg_panel
			// 
			this->sendMsg_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->sendMsg_panel->BackColor = System::Drawing::Color::LightSteelBlue;
			this->sendMsg_panel->Controls->Add(this->cancel_button);
			this->sendMsg_panel->Controls->Add(this->send_button);
			this->sendMsg_panel->Controls->Add(this->msg_textBox);
			this->sendMsg_panel->Location = System::Drawing::Point(227, 106);
			this->sendMsg_panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sendMsg_panel->Name = L"sendMsg_panel";
			this->sendMsg_panel->Size = System::Drawing::Size(502, 380);
			this->sendMsg_panel->TabIndex = 9;
			// 
			// cancel_button
			// 
			this->cancel_button->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cancel_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cancel_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_button->Location = System::Drawing::Point(126, 330);
			this->cancel_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cancel_button->Name = L"cancel_button";
			this->cancel_button->Size = System::Drawing::Size(255, 37);
			this->cancel_button->TabIndex = 14;
			this->cancel_button->Text = L"Cancel";
			this->cancel_button->UseVisualStyleBackColor = true;
			this->cancel_button->Click += gcnew System::EventHandler(this, &pages::cancel_button_Click);
			// 
			// send_button
			// 
			this->send_button->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->send_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->send_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->send_button->Location = System::Drawing::Point(126, 277);
			this->send_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->send_button->Name = L"send_button";
			this->send_button->Size = System::Drawing::Size(255, 37);
			this->send_button->TabIndex = 13;
			this->send_button->Text = L"Send";
			this->send_button->UseVisualStyleBackColor = true;
			this->send_button->Click += gcnew System::EventHandler(this, &pages::send_button_Click);
			// 
			// msg_textBox
			// 
			this->msg_textBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->msg_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->msg_textBox->Location = System::Drawing::Point(47, 29);
			this->msg_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->msg_textBox->MaxLength = 1000;
			this->msg_textBox->Multiline = true;
			this->msg_textBox->Name = L"msg_textBox";
			this->msg_textBox->Size = System::Drawing::Size(409, 232);
			this->msg_textBox->TabIndex = 11;
			// 
			// logout_panel
			// 
			this->logout_panel->BackColor = System::Drawing::SystemColors::Highlight;
			this->logout_panel->Controls->Add(this->button1);
			this->logout_panel->Controls->Add(this->logoutConfirm_button);
			this->logout_panel->Controls->Add(this->pictureBox3);
			this->logout_panel->Controls->Add(this->label5);
			this->logout_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->logout_panel->Location = System::Drawing::Point(0, 0);
			this->logout_panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->logout_panel->Name = L"logout_panel";
			this->logout_panel->Size = System::Drawing::Size(940, 614);
			this->logout_panel->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(128, 371);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(280, 46);
			this->button1->TabIndex = 17;
			this->button1->Text = L"No";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &pages::button1_Click_1);
			// 
			// logoutConfirm_button
			// 
			this->logoutConfirm_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logoutConfirm_button->Location = System::Drawing::Point(128, 203);
			this->logoutConfirm_button->Name = L"logoutConfirm_button";
			this->logoutConfirm_button->Size = System::Drawing::Size(280, 46);
			this->logoutConfirm_button->TabIndex = 16;
			this->logoutConfirm_button->Text = L"Yes, bye";
			this->logoutConfirm_button->UseVisualStyleBackColor = true;
			this->logoutConfirm_button->Click += gcnew System::EventHandler(this, &pages::logoutConfirm_button_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(556, 123);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(355, 354);
			this->pictureBox3->TabIndex = 15;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &pages::pictureBox3_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(265, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(382, 36);
			this->label5->TabIndex = 14;
			this->label5->Text = L"you want to leave!!";
			// 
			// addContact_panel
			// 
			this->addContact_panel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->addContact_panel->BackColor = System::Drawing::Color::LightSteelBlue;
			this->addContact_panel->Controls->Add(this->button2);
			this->addContact_panel->Controls->Add(this->add_button);
			this->addContact_panel->Controls->Add(this->addCon_textBox);
			this->addContact_panel->Controls->Add(this->usernameInAddCon_label);
			this->addContact_panel->Controls->Add(this->addCon_pictureBox);
			this->addContact_panel->Location = System::Drawing::Point(305, 167);
			this->addContact_panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addContact_panel->Name = L"addContact_panel";
			this->addContact_panel->Size = System::Drawing::Size(332, 292);
			this->addContact_panel->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(280, 25);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(35, 37);
			this->button2->TabIndex = 14;
			this->button2->Text = L"X";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &pages::button2_Click_1);
			// 
			// add_button
			// 
			this->add_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->add_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_button->Location = System::Drawing::Point(87, 233);
			this->add_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(163, 37);
			this->add_button->TabIndex = 13;
			this->add_button->Text = L"Add To Contact";
			this->add_button->UseVisualStyleBackColor = true;
			this->add_button->Click += gcnew System::EventHandler(this, &pages::add_button_Click);
			// 
			// addCon_textBox
			// 
			this->addCon_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->addCon_textBox->Location = System::Drawing::Point(29, 178);
			this->addCon_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addCon_textBox->Multiline = true;
			this->addCon_textBox->Name = L"addCon_textBox";
			this->addCon_textBox->Size = System::Drawing::Size(263, 34);
			this->addCon_textBox->TabIndex = 11;
			// 
			// usernameInAddCon_label
			// 
			this->usernameInAddCon_label->AutoSize = true;
			this->usernameInAddCon_label->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 13.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->usernameInAddCon_label->Location = System::Drawing::Point(24, 146);
			this->usernameInAddCon_label->Name = L"usernameInAddCon_label";
			this->usernameInAddCon_label->Size = System::Drawing::Size(149, 28);
			this->usernameInAddCon_label->TabIndex = 10;
			this->usernameInAddCon_label->Text = L"UserName";
			// 
			// addCon_pictureBox
			// 
			this->addCon_pictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addCon_pictureBox.BackgroundImage")));
			this->addCon_pictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->addCon_pictureBox->Location = System::Drawing::Point(99, 14);
			this->addCon_pictureBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addCon_pictureBox->Name = L"addCon_pictureBox";
			this->addCon_pictureBox->Size = System::Drawing::Size(136, 129);
			this->addCon_pictureBox->TabIndex = 1;
			this->addCon_pictureBox->TabStop = false;
			// 
			// pages
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1068, 674);
			this->Controls->Add(this->container_panel);
			this->Controls->Add(this->right_panel);
			this->Controls->Add(this->upper_panel);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"pages";
			this->Text = L"pages";
			this->upper_panel->ResumeLayout(false);
			this->upper_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->right_panel->ResumeLayout(false);
			this->container_panel->ResumeLayout(false);
			this->sent_panel->ResumeLayout(false);
			this->sent_panel->PerformLayout();
			this->final_sent_panel->ResumeLayout(false);
			this->message_panel->ResumeLayout(false);
			this->message_panel->PerformLayout();
			this->emptySent->ResumeLayout(false);
			this->home_panel->ResumeLayout(false);
			this->home_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->rec_panel->ResumeLayout(false);
			this->emptyRec->ResumeLayout(false);
			this->emptyRec->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->recievedMsg_panel->ResumeLayout(false);
			this->recievedMsg_panel->PerformLayout();
			this->fav_panel->ResumeLayout(false);
			this->emptyFav->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->contact_panel->ResumeLayout(false);
			this->contact_panel->PerformLayout();
			this->contactInContact_panel->ResumeLayout(false);
			this->conInFLP_panel->ResumeLayout(false);
			this->conInFLP_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_pictureBox))->EndInit();
			this->bottom_panel->ResumeLayout(false);
			this->search_panel->ResumeLayout(false);
			this->conInsearch_panel->ResumeLayout(false);
			this->conInsearch_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inSearch_pictureBox))->EndInit();
			this->sendMsg_panel->ResumeLayout(false);
			this->sendMsg_panel->PerformLayout();
			this->logout_panel->ResumeLayout(false);
			this->logout_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->addContact_panel->ResumeLayout(false);
			this->addContact_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addCon_pictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void contact_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Test app;

		app.saraha.UploadCon();

		if (app.saraha.ListOfContact.empty())
		{
			contact_panel->BringToFront();
			empty->BringToFront();
		}

		else {
			if (app.saraha.ListOfContact.size() > 1)
				nextCon_button->Visible = true;

			app.saraha.it = app.saraha.ListOfContact.begin();

			contact_panel->BringToFront();
			empty->SendToBack();
			
			page_label->Text = "Contacts";

			string s = *app.saraha.it;
			userInFLP_label->Text = gcnew String(s.c_str());

		}
		
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void page_label_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Fav_button_Click(System::Object^ sender, System::EventArgs^ e) {
		
		page_label->Text = "Favorite Messages";

		Test app;
		app.saraha.readFav();
		if (app.saraha.Favorites.empty())
		{
			fav_panel->BringToFront();
			emptyFav->BringToFront();

		}
		else {
			fav_panel->BringToFront();
			nextFav_button->Visible = true;
			activatedFav_button->Visible = true;

			favMsg_textBox->Text = gcnew String(app.saraha.Favorites.at(fav).first.c_str());
			sndIDFav_label->Text = gcnew String(to_string(app.saraha.Favorites.at(fav).second).c_str());

		}
		

	}
	private: System::Void sent_button_Click(System::Object^ sender, System::EventArgs^ e) {
		
		page_label->Text = "Sent Messages";
	
		Test app;
		
		if (app.saraha.SentMessages.empty()) {
			sent_panel->BringToFront();
			emptySent->BringToFront();
		}
		else {
			sent_panel->BringToFront();

			if(app.saraha.SentMessages.size() > 1)
				nextSent_button->Visible = true;

			else
				nextSent_button->Visible = false;

			undo_button->Visible = true;

			textbox123->Text = gcnew String(app.saraha.SentMessages.at(sentIndex).first.c_str());
			contact->Text = gcnew String(app.saraha.SentMessages.at(sentIndex).second.c_str());

		}
	
	}
	private: System::Void receviesd_button_Click(System::Object^ sender, System::EventArgs^ e) {
		rec_panel->BringToFront();
		emptyRec->BringToFront();
		page_label->Text = "Recevied Messages";

		listView1->Items->Clear();

		Test app;
		app.saraha.uploadRecMessages();

		listView1->Columns->Add("IDs");
		set<int>::iterator it;
		for (it=app.saraha.ids.begin();it != app.saraha.ids.end(); it++)
		{

			String^ s = gcnew String(to_string(*it).c_str());
			listView1->Items->Add(s);
			
		}
	
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void search_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Test app;

		string s;
		MarshalString(search_textBox->Text, s);
		String^ conName = search_textBox->Text;

		if (app.saraha.Search(s)) {
			search_panel->BringToFront();
			userInSearch_label->Text = conName;
		}

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void addContact_button_Click(System::Object^ sender, System::EventArgs^ e) {
		addContact_panel->BringToFront();
	}
	private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Test app;
		string s;
		MarshalString(addCon_textBox->Text, s);

		if (app.saraha.UserName == s)
			MessageBox::Show("You can't add yourself ya 5afif");
	
		else
		{
			bool flag = app.saraha.AddContact(s);

			if (flag)
				contact_button->PerformClick();
		}
	}
	private: System::Void sendMsg_button_Click(System::Object^ sender, System::EventArgs^ e) {
		sendMsg_panel->BringToFront();


	}
	private: System::Void send_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Test app;
		string message, conName;

		if (sender == 0)
			MarshalString(userInSearch_label->Text, conName);
		else
			conName = *app.saraha.it;

		MarshalString(msg_textBox->Text, message);

		app.saraha.SentMessageToCon(message, conName);
		sendMsg_panel->SendToBack();
		
		
	}
	private: System::Void invalidCon_label_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void upper_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void inactiveFav_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Test app;
	
		string i, msg;
		MarshalString(chosenId_textBox->Text, i);
		MarshalString(recMsg_textBox->Text, msg);

		int id = stoi(i);


		activeFav_button->BringToFront();
		app.saraha.Favorites.push_back(make_pair(msg, id));
		app.saraha.RecievedMessage[id][rec].second = true;


		
	}
	private: System::Void activeFav_button_Click(System::Object^ sender, System::EventArgs^ e) {

		
	}
	private: System::Void activatedFav_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Test app;
		app.saraha.removeOldest();
		fav--;

		string msg, i;
		MarshalString(favMsg_textBox->Text, msg);
		MarshalString(sndIDFav_label->Text, i);
		
		int id = stoi(i);
		for (int i = 0; i < app.saraha.RecievedMessage[id].size(); i++)
			if (app.saraha.RecievedMessage[id][i].first == msg)
			{
				app.saraha.RecievedMessage[id][i].second = false;
				break;
			}
		
		
		nextFav_button->PerformClick();


	}
	private: System::Void inactivatedFav_button_Click(System::Object^ sender, System::EventArgs^ e) {
		activatedFav_button->BringToFront();
	}

	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void contact_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void sentTo_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void home_button_Click(System::Object^ sender, System::EventArgs^ e) {
		home_panel->BringToFront();
		Test app;
		string s = "your id is: " + to_string(app.saraha.ID);
		page_label->Text = gcnew String(s.c_str());
	}
	private: System::Void where_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel2_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void welcome_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void welcome_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void rec_flowLayoutPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Ok \ngo send a nice message to your friends");
	}
	private: System::Void logout_button_Click(System::Object^ sender, System::EventArgs^ e) {
		logout_panel->BringToFront();
		page_label->Text = "";
	}
	private: System::Void logoutConfirm_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Test app;
		app.saraha.Logout();
		MessageBox::Show("Ok \n see you");
		this->Close();
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void message_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void recievedMsg_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void sendMsg_button_Click_1(System::Object^ sender, System::EventArgs^ e) {
		sendMsg_panel->BringToFront();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		contactInContact_panel->BringToFront();
	}
	private: System::Void conInFLP_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void favMsg_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void sndIDFav_label_Click(System::Object^ sender, System::EventArgs^ e) {
	


	}
	private: System::Void nextFav_button_Click(System::Object^ sender, System::EventArgs^ e) {

		Test app;
		fav++;
		sndIDFav_label->Text = gcnew String(to_string(app.saraha.Favorites.at(fav).second).c_str());
		favMsg_textBox->Text = gcnew String(app.saraha.Favorites.at(fav).first.c_str());

		

		if (fav == app.saraha.Favorites.size() - 1) 
			nextFav_button->Visible = false;
		if (fav == 1) {
			activatedFav_button->Visible = false;
			prevFav_button->Visible = true;
		}
	
	}
	private: System::Void prevFav_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Test app;
		if (fav == 1) {
			prevFav_button->Visible = false;
			activatedFav_button->Visible = true;
		}
		
			

		fav--;
		sndIDFav_label->Text = gcnew String(to_string(app.saraha.Favorites.at(fav).second).c_str());
		favMsg_textBox->Text = gcnew String(app.saraha.Favorites.at(fav).first.c_str());

		if (fav == app.saraha.Favorites.size() - 2)
			nextFav_button->Visible = true;
		
		

	}
	private: System::Void conInFLP_panel_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void sendMsg_button_Click_2(System::Object^ sender, System::EventArgs^ e) {
		sendMsg_panel->BringToFront();
		sender = 1;
	}
	private: System::Void userInFLP_label_Click(System::Object^ sender, System::EventArgs^ e) {




	}
	private: System::Void nextCon_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Test app;

		app.saraha.it++;

		if (app.saraha.it != app.saraha.ListOfContact.begin())
			previosCon_button->Visible = true;

		string s = *app.saraha.it;
		userInFLP_label->Text = gcnew String(s.c_str());

		app.saraha.it++;
		if (app.saraha.it == app.saraha.ListOfContact.end())
			nextCon_button->Visible = false;

		app.saraha.it--;


	}
private: System::Void previosCon_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Test app;

	app.saraha.it--;

	if (app.saraha.it != app.saraha.ListOfContact.end())
		nextCon_button->Visible = true;

	string s = *app.saraha.it;
	userInFLP_label->Text = gcnew String(s.c_str());

	if (app.saraha.it == app.saraha.ListOfContact.begin())
		previosCon_button->Visible = false;

}
private: System::Void prevSent_button_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void nextSent_button_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void sentMsg_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void undo_button_Click(System::Object^ sender, System::EventArgs^ e) {
	/*Test app;
	string r;

	MarshalString(contact_label->Text, r);
	app.saraha.undo(r, app.saraha.UserName, app.saraha.ID);

	sentIndex--;
	nextSent_button->PerformClick();*/
	MessageBox::Show("tset");
}
private: System::Void sendMsgInSearch_button_Click(System::Object^ sender, System::EventArgs^ e) {
	sendMsg_panel->BringToFront();
	sender = 0;
}
private: System::Void cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
	sendMsg_panel->SendToBack();
	msg_textBox->Text = "";
}
private: System::Void userInSearch_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void showMsg_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Test app;

	if (app.saraha.SentMessages.empty())
		MessageBox::Show("You didn't send any message\n Go send a message to your contact");
	else
	{
		emptySent->SendToBack();
		nextSent_button->Visible = true;
		undo_button->Visible = true;
	
		textbox123->Text = gcnew String(app.saraha.SentMessages.at(sentIndex).first.c_str());
	//	showMsg_button->Visible = false;
	}
}
private: System::Void nextSent_button_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Test app;
	if (sentIndex == 0) {
		prevSent_button->Visible = true;
	}
	sentIndex++;
	textbox123->Text = gcnew String(app.saraha.SentMessages.at(sentIndex).first.c_str());
	contact->Text = gcnew String(app.saraha.SentMessages.at(sentIndex).second.c_str());

	if (sentIndex == app.saraha.SentMessages.size() - 1)
		nextSent_button->Visible = false;

	if (sentIndex == 1) {
		prevSent_button->Visible = true;
		undo_button->Visible = false;
	}

}
private: System::Void contact_label_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Test app;
	contact->Text = gcnew String(app.saraha.SentMessages.at(sentIndex).second.c_str());
}
private: System::Void prevSent_button_Click_1(System::Object^ sender, System::EventArgs^ e) {

	Test app;

	sentIndex--;
	textbox123->Text = gcnew String(app.saraha.SentMessages.at(sentIndex).first.c_str());
	contact->Text = gcnew String(app.saraha.SentMessages.at(sentIndex).second.c_str());

	if (sentIndex == 0) {
		prevSent_button->Visible = false;
		undo_button->Visible = true;
	}
	if (sentIndex == app.saraha.SentMessages.size() - 2) {
		nextSent_button->Visible = true;
	}
}
private: System::Void sentMsg_textBox_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void undo_button_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Test app;
	string r;

	MarshalString(contact->Text, r);
	app.saraha.undo(r);
	
	sentIndex--;
	nextSent_button->PerformClick();

}
private: System::Void listView1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	

}
private: System::Void showfav_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Test app;
	if (app.saraha.Favorites.empty())
		MessageBox::Show("You don't have any favorite messages");
	else
	//{
		emptyFav->SendToBack();
	/*	if (fav > 1)
			nextFav_button->Visible = true;
		else
			nextFav_button->Visible = false;

		
	}*/


}
private: System::Void show_rec_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Test app;

	string i;
	MarshalString(chosenId_textBox->Text, i);
	
	int id = stoi(i);
	app.saraha.ViewRecievedMessages(id);

	if (app.saraha.RecievedMessage[id].empty())
		MessageBox::Show("You don't have recieved messages from this ID");
	else
	{
		emptyRec->SendToBack();
		panel2->BringToFront();
		recievedMsg_panel->BringToFront();
		nextRec_button->Visible = true;

		string i;
		MarshalString(chosenId_textBox->Text, i);

		int id = stoi(i);

		recMsg_textBox->Text = gcnew String(app.saraha.RecievedMessage[id][rec].first.c_str());
		sndrID_label->Text = chosenId_textBox->Text;

	}

}
private: System::Void nextRec_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Test app;
	if (rec == 0) 
		prevRec_button->Visible = true;
	
	rec++;
	string i, msg;
	MarshalString(chosenId_textBox->Text, i);
	MarshalString(recMsg_textBox->Text, msg);

	int id = stoi(i);

	recMsg_textBox->Text = gcnew String(app.saraha.RecievedMessage[id][rec].first.c_str());
	sndrID_label->Text = chosenId_textBox->Text;

	if (rec == app.saraha.RecievedMessage[id].size() - 1)
		nextRec_button->Visible = false;

	if (rec == 1)
		prevRec_button->Visible = true;

	

	if (app.saraha.RecievedMessage[id][rec].second)
		activeFav_button->BringToFront();
	else
		inactiveFav_button->BringToFront();
	
	

	
}
private: System::Void prevRec_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Test app;

	rec--;

	string i, msg;
	MarshalString(chosenId_textBox->Text, i);
	MarshalString(recMsg_textBox->Text, msg);

	int id = stoi(i);

	recMsg_textBox->Text = gcnew String(app.saraha.RecievedMessage[id][rec].first.c_str());
	sndrID_label->Text = chosenId_textBox->Text;

	if (rec == 0) {
		prevRec_button->Visible = false;
		undo_button->Visible = true;
	}
	if (rec == app.saraha.RecievedMessage[id].size() - 2) {
		nextRec_button->Visible = true;
	}


	if (app.saraha.RecievedMessage[id][rec].second)
		activeFav_button->BringToFront();
	else
		inactiveFav_button->BringToFront();


}

private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	addContact_panel->SendToBack();
}
};
}
