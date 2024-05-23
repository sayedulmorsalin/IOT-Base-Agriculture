#pragma once
#include "Header.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	private:
		String^ name;
		int n1;
		int n2;
		int n3;
		int n4;
		int n5;
		int n6;
		int n7;
		int n8;
	public:
		MyForm5(void)
		{
			InitializeComponent();
		}

		MyForm5(String^ id, int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8)
		{
			InitializeComponent();
			this->name = id;
			this->n1 = n1;
			this->n2 = n2;
			this->n3 = n3;
			this->n4 = n4;
			this->n5 = n5;
			this->n6 = n6;
			this->n7 = n7;
			this->n8 = n8;

			int total = n3 + n4 + n5 + n6;
			String^ totals = "You Have " + total.ToString() + " KG crop in your store";
			this->label4->Text = totals;

			String^ totalsell = "You sell " + n7.ToString() + " KG crop in this year";
			this->label3->Text = totalsell;

			String^ totalInvestment = "Investment = " + n1.ToString() + " TK";
			this->label5->Text = totalInvestment;

			String^ totalProfit = "Profit = " + n2.ToString() + " TK";
			this->label6->Text = totalProfit;
		}

	protected:
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;

	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->button7 = (gcnew System::Windows::Forms::Button());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->Location = System::Drawing::Point(52, 70);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(581, 38);
			   this->label4->TabIndex = 9;
			   this->label4->Text = L"You have 00.0 KG crop in your store\r\n";
			   // 
			   // button5
			   // 
			   this->button5->Location = System::Drawing::Point(12, 12);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(75, 23);
			   this->button5->TabIndex = 10;
			   this->button5->Text = L"<-Back";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &MyForm5::button5_Click);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(113, 171);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(464, 32);
			   this->label3->TabIndex = 12;
			   this->label3->Text = L"You sell 00.0 kg crop in this year ";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->Location = System::Drawing::Point(115, 252);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(207, 25);
			   this->label5->TabIndex = 13;
			   this->label5->Text = L"Investment = 0.00 tk";
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label6->Location = System::Drawing::Point(368, 252);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(152, 25);
			   this->label6->TabIndex = 14;
			   this->label6->Text = L"Profit = 0.00 tk";
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label7->Location = System::Drawing::Point(114, 342);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(161, 25);
			   this->label7->TabIndex = 15;
			   this->label7->Text = L"Add investment";
			   // 
			   // button7
			   // 
			   this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				   static_cast<System::Int32>(static_cast<System::Byte>(192)));
			   this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button7->Location = System::Drawing::Point(298, 336);
			   this->button7->Name = L"button7";
			   this->button7->Size = System::Drawing::Size(40, 36);
			   this->button7->TabIndex = 16;
			   this->button7->Text = L"+";
			   this->button7->UseVisualStyleBackColor = false;
			   this->button7->Click += gcnew System::EventHandler(this, &MyForm5::button7_Click);
			   // 
			   // textBox2
			   // 
			   this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBox2->Location = System::Drawing::Point(360, 342);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(368, 30);
			   this->textBox2->TabIndex = 17;
			   // 
			   // button1
			   // 
			   this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(695, 73);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(120, 40);
			   this->button1->TabIndex = 18;
			   this->button1->Text = L"Details";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			   // 
			   // MyForm5
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				   static_cast<System::Int32>(static_cast<System::Byte>(192)));
			   this->ClientSize = System::Drawing::Size(882, 603);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->button7);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->label4);
			   this->MinimumSize = System::Drawing::Size(900, 650);
			   this->Name = L"MyForm5";
			   this->Text = L"Sell crop";
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Check if textBox2 contains a valid integer
		int num1;
		if (!Int32::TryParse(this->textBox2->Text, num1)) {
			MessageBox::Show("Please enter a valid number", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		int total_investment = num1 + n1;

		// Check if n8 (ID) is valid
		if (n8 <= 0) {
			MessageBox::Show("Invalid ID", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Establishing connection to the database
		String^ connectionstring = "Data Source=localhost\\sqlexpress;Initial Catalog=root_info;Integrated Security=True;";
		SqlConnection^ con = gcnew SqlConnection(connectionstring);
		con->Open();

		// SQL query to update the investment
		String^ sqlquery = "UPDATE root_table SET investment = @total_investment WHERE ID = @id";

		// Create and configure the SqlCommand
		SqlCommand^ cmd = gcnew SqlCommand(sqlquery, con);
		cmd->Parameters->AddWithValue("@total_investment", total_investment);
		cmd->Parameters->AddWithValue("@id", n8);

		// Execute the query
		cmd->ExecuteNonQuery();
		con->Close();

		// Show success message
		MessageBox::Show("Your investment submitted successfully", "Success", MessageBoxButtons::OK);

		// Hide the current form and show the next form

	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to connect to database: " + ex->Message, "Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ details = "You Have " + n3.ToString() + " KG rice in your store"+ "You Have " + n4.ToString() + " KG Potato in your store"+ "You Have " + n5.ToString() + " KG Wheat in your store"+ "You Have " + n6.ToString() + " KG Pepper in your store";
		MessageBox::Show(details, "details");
	}
};
}