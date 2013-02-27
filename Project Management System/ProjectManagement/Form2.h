#pragma once
#include "Form3.h"
#include "Form4.h"
namespace ProjectManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Security::Cryptography;

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
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  name;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  pwd;

	private: System::Windows::Forms::TextBox^  uname;
	private: System::Windows::Forms::TextBox^  cpwd;


	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  ltype;
	private: System::Windows::Forms::Button^  createaccount;


	private: System::Windows::Forms::ComboBox^  dept;
	private: System::Windows::Forms::Button^  cancel;



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
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pwd = (gcnew System::Windows::Forms::TextBox());
			this->uname = (gcnew System::Windows::Forms::TextBox());
			this->cpwd = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ltype = (gcnew System::Windows::Forms::ComboBox());
			this->createaccount = (gcnew System::Windows::Forms::Button());
			this->dept = (gcnew System::Windows::Forms::ComboBox());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(35, 36);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(314, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter the following details to create a new account:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(55, 91);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name :";
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(218, 89);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(202, 22);
			this->name->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(55, 157);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Username :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(55, 217);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Password :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(55, 274);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 17);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Confirm password :";
			// 
			// pwd
			// 
			this->pwd->Location = System::Drawing::Point(218, 215);
			this->pwd->Name = L"pwd";
			this->pwd->Size = System::Drawing::Size(202, 22);
			this->pwd->TabIndex = 6;
			this->pwd->UseSystemPasswordChar = true;
			// 
			// uname
			// 
			this->uname->Location = System::Drawing::Point(218, 155);
			this->uname->Name = L"uname";
			this->uname->Size = System::Drawing::Size(202, 22);
			this->uname->TabIndex = 7;
			// 
			// cpwd
			// 
			this->cpwd->Location = System::Drawing::Point(218, 272);
			this->cpwd->Name = L"cpwd";
			this->cpwd->Size = System::Drawing::Size(202, 22);
			this->cpwd->TabIndex = 8;
			this->cpwd->UseSystemPasswordChar = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(55, 336);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Department:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(55, 401);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 17);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Account type :";
			// 
			// ltype
			// 
			this->ltype->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ltype->FormattingEnabled = true;
			this->ltype->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Investigator", L"Sponsor"});
			this->ltype->Location = System::Drawing::Point(218, 399);
			this->ltype->Name = L"ltype";
			this->ltype->Size = System::Drawing::Size(202, 24);
			this->ltype->TabIndex = 12;
			this->ltype->Text = L"Select";
			this->ltype->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::ltype_SelectedIndexChanged);
			// 
			// createaccount
			// 
			this->createaccount->Location = System::Drawing::Point(156, 467);
			this->createaccount->Name = L"createaccount";
			this->createaccount->Size = System::Drawing::Size(131, 34);
			this->createaccount->TabIndex = 13;
			this->createaccount->Text = L"Create Account";
			this->createaccount->UseVisualStyleBackColor = true;
			this->createaccount->Click += gcnew System::EventHandler(this, &Form2::createaccount_Click);
			// 
			// dept
			// 
			this->dept->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dept->FormattingEnabled = true;
			this->dept->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Investigator", L"Sponsor"});
			this->dept->Location = System::Drawing::Point(218, 329);
			this->dept->Name = L"dept";
			this->dept->Size = System::Drawing::Size(202, 24);
			this->dept->TabIndex = 14;
			this->dept->Text = L"Select";
			// 
			// cancel
			// 
			this->cancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->cancel->Location = System::Drawing::Point(348, 467);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(100, 34);
			this->cancel->TabIndex = 15;
			this->cancel->Text = L"Cancel";
			this->cancel->UseVisualStyleBackColor = true;
			// 
			// Form2
			// 
			this->AcceptButton = this->createaccount;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->cancel;
			this->ClientSize = System::Drawing::Size(574, 551);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->dept);
			this->Controls->Add(this->createaccount);
			this->Controls->Add(this->ltype);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->cpwd);
			this->Controls->Add(this->uname);
			this->Controls->Add(this->pwd);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form2";
			this->Text = L"Create New Account";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void createaccount_Click(System::Object^  sender, System::EventArgs^  e) {
				
				// Make sure user provided the name
				if( this->name->Text == "" )
				{
					MessageBox::Show("You must provide your name");
					return;
				}				

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

				// The password and the confirm password must be the same
				if( this->cpwd->Text != this->pwd->Text )
				{
					MessageBox::Show("The passwords you provided are not the same");
					return;
				}

				// check for dept and a/c type
				if( this->dept->SelectedIndex == -1 || this->ltype->SelectedIndex == -1 || this->ltype->SelectedIndex != this->dept->SelectedIndex )
				{
					MessageBox::Show("You must fill the dept from given list.");
					return;
				}

				MySqlConnection^ conDataBase=gcnew MySqlConnection("datasource=Localhost;port=3306;username=root;password=arpit") ; // condatabase for establize connection .
				String ^quer = "SELECT uname FROM pms.users;";
				MySqlCommand^ cmdu = gcnew MySqlCommand(quer, conDataBase);
				conDataBase->Open();
				MySqlDataReader^ reader = cmdu->ExecuteReader();
				while (reader->Read())
				{
					//String ^str = reader[0]->ToString();
					//MessageBox::Show(str);
					if(this->uname->Text == reader[0]->ToString()){
						MessageBox::Show("Username already exists");
						return;
					}
				}
				reader->Close();
				String ^comm = "INSERT INTO pms.users (name, uname, pwd, dept, ltype) VALUES (\""+this->name->Text+"\", \""+this->uname->Text+"\", \""+this->pwd->Text+"\", "+dept->SelectedIndex.ToString()+", "+ltype->SelectedIndex.ToString()+") ;";
				MySqlCommand^ cmdDataBase=gcnew MySqlCommand(comm, conDataBase);
				
				cmdDataBase->ExecuteNonQuery();
				conDataBase->Close();
				MessageBox::Show("You account has been created.");
				if( this->ltype->SelectedIndex == 0 ){	//Investigator
					this->Visible = false;
					Form3^ frm = gcnew Form3();
					frm->Show(this);
				}
				else if(this->ltype->SelectedIndex == 1){	//Sponsor
					this->Visible = false;
					Form4^ frm = gcnew Form4();
					frm->Show(this);
				}
		 }
private: System::Void ltype_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
