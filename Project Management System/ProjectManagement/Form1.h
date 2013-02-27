#pragma once

namespace ProjectManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		static bool isLogin = false;
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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  uname;
	protected: 

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  pwd;
	private: System::Windows::Forms::ComboBox^  ltype;
	private: System::Windows::Forms::Button^  button1;




	private: System::Windows::Forms::Button^  button2;


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
			this->uname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pwd = (gcnew System::Windows::Forms::TextBox());
			this->ltype = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(47, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username :";
			// 
			// uname
			// 
			this->uname->Location = System::Drawing::Point(222, 63);
			this->uname->Name = L"uname";
			this->uname->Size = System::Drawing::Size(149, 20);
			this->uname->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(47, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(47, 204);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Login Mode :";
			// 
			// pwd
			// 
			this->pwd->Location = System::Drawing::Point(222, 129);
			this->pwd->Name = L"pwd";
			this->pwd->Size = System::Drawing::Size(149, 20);
			this->pwd->TabIndex = 5;
			this->pwd->UseSystemPasswordChar = true;
			// 
			// ltype
			// 
			this->ltype->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ltype->FormattingEnabled = true;
			this->ltype->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Investigator", L"Sponsor", L"Administrator"});
			this->ltype->Location = System::Drawing::Point(222, 202);
			this->ltype->Name = L"ltype";
			this->ltype->Size = System::Drawing::Size(149, 26);
			this->ltype->TabIndex = 6;
			this->ltype->Text = L"Select";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(78, 272);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 35);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(268, 272);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 35);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Create New Account";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(530, 365);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ltype);
			this->Controls->Add(this->pwd);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->uname);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				this->Visible = false;
				Form2^ frm = gcnew Form2();
				frm->Show(this);
				//this->Visible = true;
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				
				// Make sure the user provided a username
			 	if( this->uname->Text == "" )
				{
					MessageBox::Show("You must provide a username");
					return;
				}

				// Don't allow a blank password
				if( this->pwd->Text == "" )
				{
					MessageBox::Show("Blank passwords are not allowed\n"
								  "Please provide a password");
					return;
				}

				// check for a/c type
				if( this->ltype->SelectedIndex == -1 )
				{
					MessageBox::Show("You must fill the login type from given list.");
					return;
				}

				MySqlConnection^ conDataBase=gcnew MySqlConnection("datasource=Localhost;port=3306;username=root;password=arpit") ; // condatabase for establize connection .
				String ^quer = "SELECT uname, pwd, ltype FROM pms.users;";
				MySqlCommand^ cmdu = gcnew MySqlCommand(quer, conDataBase);
				conDataBase->Open();
				MySqlDataReader^ reader = cmdu->ExecuteReader();
				while (reader->Read())
				{
					if(this->uname->Text == reader[0]->ToString() && this->pwd->Text == reader[1]->ToString() && this->ltype->SelectedIndex == (int)reader[2]){
						isLogin = true;
						break;
					}
				}
				reader->Close();
				conDataBase->Close();
				if(isLogin)
					MessageBox::Show("Login Successfull.");
				else
					MessageBox::Show("Login Unsuccessfull. Please try again.");
		 }
};
}

