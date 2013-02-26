#pragma once

namespace pmstest {

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
	private: System::Windows::Forms::Button^  btnCreateDB;
	protected: 

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
			this->btnCreateDB = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnCreateDB
			// 
			this->btnCreateDB->Location = System::Drawing::Point(63, 22);
			this->btnCreateDB->Name = L"btnCreateDB";
			this->btnCreateDB->Size = System::Drawing::Size(147, 31);
			this->btnCreateDB->TabIndex = 0;
			this->btnCreateDB->Text = L"Create Database";
			this->btnCreateDB->UseVisualStyleBackColor = true;
			this->btnCreateDB->Click += gcnew System::EventHandler(this, &Form1::btnCreateDB_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->btnCreateDB);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCreateDB_Click(System::Object^  sender, System::EventArgs^  e) {
				 //MySqlConnection ^conDatabase = gcnew MySqlConnection(S"Data Source=localhost;Persist Security Info=yes");
				//MySqlCommand    ^cmdDatabase = gcnew MySqlCommand(S"CREATE DATABASE CarRental1;", conDatabase);

				String^ constring=L"datasource=Localhost;port=3306;username=root;password=arpit" ; // String variable for connection data .
				MySqlConnection^ conDataBase=gcnew MySqlConnection(constring) ; // condatabase for establize connection .
				MySqlCommand^ cmdDataBase=gcnew MySqlCommand("CREATE DATABASE CarRental;",conDataBase);
				conDataBase->Open();
				cmdDataBase->ExecuteNonQuery();
				conDataBase->Close();
			 }
	};
}

