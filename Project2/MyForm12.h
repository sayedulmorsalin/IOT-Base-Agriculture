#pragma once
#include"MyForm14.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm12
	/// </summary>
	public ref class MyForm12 : public System::Windows::Forms::Form
	{
	public:
		MyForm12(void)
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
		~MyForm12()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::Label^ label1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Green;
			this->button1->Location = System::Drawing::Point(446, 424);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 42);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm12::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(196, 299);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(719, 38);
			this->textBox2->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(196, 156);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(719, 38);
			this->textBox1->TabIndex = 7;
			// 
			// label
			// 
			this->label->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label->Location = System::Drawing::Point(189, 212);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(610, 59);
			this->label->TabIndex = 6;
			this->label->Text = L"Please enter your password";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(189, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(381, 42);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Please enter your id ";
			// 
			// MyForm12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1104, 559);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm12";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ id = this->textBox1->Text;
	String^ password = this->textBox2->Text;

	if (id->Length == 0 || password->Length == 0)
	{
		MessageBox::Show("id or password is empty", "error box", MessageBoxButtons::OK);
		return;
	}
	try
	{
		String^ connectionstring = "Data Source=localhost\\sqlexpress;Initial Catalog=root_info;Integrated Security=True;";
		SqlConnection con(connectionstring);
		String^ sqlquery = "select * from root_table where name like @name AND password like @password";
		SqlCommand cmd(sqlquery, % con);
		cmd.Parameters->AddWithValue("@name", "%" + this->textBox1->Text + "%");
		cmd.Parameters->AddWithValue("@password", "%" + this->textBox2->Text + "%");
		con.Open();
		SqlDataReader^ dr = cmd.ExecuteReader();
		if (dr->Read())
		{
			int number1 = dr->IsDBNull(3) ? 0 : dr->GetInt32(3);
			int number2 = dr->IsDBNull(4) ? 0 : dr->GetInt32(4);
			int number3 = dr->IsDBNull(5) ? 0 : dr->GetInt32(5);
			int number4 = dr->IsDBNull(6) ? 0 : dr->GetInt32(6);
			int number5 = dr->IsDBNull(7) ? 0 : dr->GetInt32(7);
			int number6 = dr->IsDBNull(8) ? 0 : dr->GetInt32(8);
			int number7 = dr->IsDBNull(9) ? 0 : dr->GetInt32(9);
			int number8 = dr->IsDBNull(10) ? 0 : dr->GetInt32(10);
			int number9 = dr->IsDBNull(11) ? 0 : dr->GetInt32(11);
			int number10 = dr->IsDBNull(12) ? 0 : dr->GetInt32(12);
			int number11 = dr->IsDBNull(13) ? 0 : dr->GetInt32(13);
			int number12 = dr->IsDBNull(14) ? 0 : dr->GetInt32(14);
			int number13 = dr->IsDBNull(15) ? 0 : dr->GetInt32(15);
			int number14 = dr->IsDBNull(16) ? 0 : dr->GetInt32(16);
			int number15 = dr->IsDBNull(17) ? 0 : dr->GetInt32(17);
			int number16 = dr->IsDBNull(0) ? 0 : dr->GetInt32(0);

			this->Hide();
			MyForm14^ obj22 = gcnew MyForm14(id, number1, number2, number3, number4, number5, number6, number7, number8, number9, number10, number11, number12, number13, number14, number15, number16);
			obj22->ShowDialog();
		}
		else
		{
			dr->Close();
			MessageBox::Show("you don't have account please register", "success", MessageBoxButtons::OK);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Failed to connect to database: " + ex->Message, "failed", MessageBoxButtons::OK);
	}
}
};
}
