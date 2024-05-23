#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm7
	/// </summary>
	public ref class MyForm7 : public System::Windows::Forms::Form
	{
	private:
		String^ name;
		int n11;
		int n12;
		int n13;
		int n14;
		int n15;
		int crop=0;
	private: System::Windows::Forms::Label^ label3;
		  
	public:
		MyForm7(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		MyForm7(String^name, int n11, int n12, int n13, int n14,int n15)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->name = name;
			this->n11 = n11;
			this->n12 = n12;
			this->n13 = n13;
			this->n14 = n14;
			this->n15 = n15;
			int total = n11 + n12 + n13 + n14;
			String^ totals = "There are" + total.ToString() + " KG cultivationing crop ";
			this->label3->Text = totals;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(153, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(475, 32);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Which crop you cultivationing now";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Green;
			this->button1->Location = System::Drawing::Point(189, 153);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 43);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Rice";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm7::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Green;
			this->button2->Location = System::Drawing::Point(412, 153);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 43);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Wheat";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm7::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Green;
			this->button3->Location = System::Drawing::Point(189, 216);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 43);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Potato ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm7::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Green;
			this->button4->Location = System::Drawing::Point(412, 216);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 43);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Pepper";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm7::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(154, 315);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(408, 25);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Write the predicted quantity of crop in KG";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(150, 354);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(555, 30);
			this->textBox1->TabIndex = 15;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 16;
			this->button5->Text = L"<-Back";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm7::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Green;
			this->button6->Location = System::Drawing::Point(283, 436);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(123, 39);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Submit";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm7::button6_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(144, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(538, 38);
			this->label3->TabIndex = 18;
			this->label3->Text = L"You are cultivatioing 00.0 Kg crop";
			// 
			// MyForm7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(849, 546);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm7";
			this->Text = L"Growing crop";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	crop = 1;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
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
			total_investment = num1 + n11;
			sqlquery = "UPDATE root_table SET gr_rice = @total_investment WHERE ID = @id";
			break;
		case 2:
			total_investment = num1 + n12;
			sqlquery = "UPDATE root_table SET gr_potato = @total_investment WHERE ID = @id";
			break;
		case 3:
			total_investment = num1 + n13;
			sqlquery = "UPDATE root_table SET gr_wheat = @total_investment WHERE ID = @id";
			break;
		case 4:
			total_investment = num1 + n14;
			sqlquery = "UPDATE root_table SET gr_papper = @total_investment WHERE ID = @id";
			break;
		}

		SqlConnection^ con = gcnew SqlConnection(connectionstring);
		con->Open();
		SqlCommand^ cmd = gcnew SqlCommand(sqlquery, con);
		cmd->Parameters->AddWithValue("@total_investment", total_investment);
		cmd->Parameters->AddWithValue("@id", n15);
		cmd->ExecuteNonQuery();
		con->Close();

		MessageBox::Show("Your predicted crop submitted successfully", "Success", MessageBoxButtons::OK);
	}
}

};
}
