#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	private:
		String^ name;
		int n7;
		int n8;
		int n9;
		int n10;
		int n11;
		int crop = 0;
	public:
		MyForm6(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		MyForm6(String^ name, int n7, int n8, int n9, int n10,int n11)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->name = name;
			this->n7 = n7;
			this->n8 = n8;
			this->n9 = n9;
			this->n10 = n10;
			this->n11 = n11;

			int total = n7 + n8 + n9 + n10;
			String^ totals = "There are" + total.ToString() + " KG upcoming crop ";
			this->label3->Text = totals;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(156, 418);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(555, 30);
			this->textBox1->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(151, 370);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(366, 25);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Write the predicted quantity of crop in KG";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Green;
			this->button4->Location = System::Drawing::Point(561, 277);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(95, 43);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Pepper";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm6::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Green;
			this->button3->Location = System::Drawing::Point(156, 277);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(95, 43);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Potato ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm6::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Green;
			this->button2->Location = System::Drawing::Point(419, 277);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 43);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Wheat";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm6::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Green;
			this->button1->Location = System::Drawing::Point(286, 277);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 43);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Rice";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(150, 196);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(385, 32);
			this->label1->TabIndex = 9;
			this->label1->Text = L"which crop are comming now \r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(150, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(429, 32);
			this->label3->TabIndex = 16;
			this->label3->Text = L"There are 00.0 kg upcoming crop";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 17;
			this->button5->Text = L"<-Back";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm6::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Green;
			this->button6->Location = System::Drawing::Point(344, 470);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(113, 34);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Submit";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm6::button6_Click);
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(860, 516);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm6";
			this->Text = L"Upcoming crop";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	crop = 1;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	crop = 2;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	crop = 3;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	crop = 4;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int num1;
	Int32::TryParse(this->textBox1->Text, num1);

	if (crop == 0)
	{
		MessageBox::Show("Please click on a crop to add it", "Empty Crop", MessageBoxButtons::OK);
	}
	else
	{
		int total_investment = 0;
		String^ connectionstring = "Data Source=localhost\\sqlexpress;Initial Catalog=root_info;Integrated Security=True;";
		String^ sqlquery = "";

		switch (crop)
		{
		case 1:
			total_investment = num1 + n7;
			sqlquery = "UPDATE root_table SET up_potato = @total_investment WHERE ID = @id";
			break;
		case 2:
			total_investment = num1 + n8;
			sqlquery = "UPDATE root_table SET up_rice = @total_investment WHERE ID = @id";
			break;
		case 3:
			total_investment = num1 + n9;
			sqlquery = "UPDATE root_table SET up_wheat = @total_investment WHERE ID = @id";
			break;
		case 4:
			total_investment = num1 + n10;
			sqlquery = "UPDATE root_table SET up_papper = @total_investment WHERE ID = @id";
			break;
		}

		SqlConnection^ con = gcnew SqlConnection(connectionstring);
		con->Open();
		SqlCommand^ cmd = gcnew SqlCommand(sqlquery, con);
		cmd->Parameters->AddWithValue("@total_investment", total_investment);
		cmd->Parameters->AddWithValue("@id", n11);
		cmd->ExecuteNonQuery();
		con->Close();

		MessageBox::Show("Your predicted crop submitted successfully", "Success", MessageBoxButtons::OK);
	}
}

};
}
