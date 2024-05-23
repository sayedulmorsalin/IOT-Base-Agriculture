
#pragma once
#include"MyForm5.h"
#include"MyForm6.h"
#include"MyForm7.h"
#include"MyForm8.h"
#include"MyForm19.h"
#include"MyForm9.h"
#include"MyForm10.h"
#include"Header.h"




namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
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
		int n9;
		int n10;
		int n11;
		int n12;
		int n13;
		int n14;
		int n15;
		int n17;
		int n18;
	private: System::Windows::Forms::Button^ button7;
		   int n16;

	public:
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		MyForm4(String^ id,int n1,int n2,int n3,int n4,int n5,int n6,int n7,int n8,int n9,int n10,int n11,int n12,int n13,int n14,int n15,int n16,int n17,int n18)
		{


			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
			this->name = id;
			this->n1 = n1;
			this->n2 = n2;
			this->n3 = n3;
			this->n4 = n4;
			this->n5 = n5;
			this->n6 = n6;
			this->n7 = n7;
			this->n8 = n8;
			this->n9 = n9;
			this->n10 = n10;
			this->n11 = n11;
			this->n12 = n12;
			this->n13 = n13;
			this->n14 = n14;
			this->n15 = n15;
			this->n16 = n16;
			this->n17 = n17;
			this->n18 = n18;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button3;




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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Teal;
			this->button1->Location = System::Drawing::Point(388, 136);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(441, 72);
			this->button1->TabIndex = 0;
			this->button1->Text = L"See Crop Online ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(370, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(523, 54);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Welcome to dashboard";
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Teal;
			this->button2->Location = System::Drawing::Point(388, 214);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(441, 72);
			this->button2->TabIndex = 2;
			this->button2->Text = L"My Store\r\n";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Teal;
			this->button4->Location = System::Drawing::Point(388, 370);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(441, 72);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Upcoming Crop \r\n\r\n";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm4::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Teal;
			this->button5->Location = System::Drawing::Point(388, 448);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(441, 72);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Which Crop are Growing Now ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm4::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Teal;
			this->button6->Location = System::Drawing::Point(388, 526);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(441, 72);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Fertilizer for Your Land";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm4::button6_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Teal;
			this->button8->Location = System::Drawing::Point(388, 682);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(441, 72);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Help and Support";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm4::button8_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Teal;
			this->button3->Location = System::Drawing::Point(388, 292);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(441, 72);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Sell Now";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm4::button3_Click_1);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Teal;
			this->button7->Location = System::Drawing::Point(388, 604);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(441, 72);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Moisture of Your Land";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm4::button7_Click);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->ClientSize = System::Drawing::Size(1282, 863);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm4";
			this->Text = L"Dashboard";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Hide();
	
		MyForm5^ obj7 = gcnew MyForm5(name,n1,n2,n3,n4,n5,n6,n15,n16);
		obj7->ShowDialog();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->Hide();
	MyForm6^ obj8 = gcnew MyForm6(name,n7,n8,n9,n10,n16);
	obj8->ShowDialog();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->Hide();
	MyForm7^ obj9 = gcnew MyForm7(name,n11,n12,n13,n14,n16);
	obj9->ShowDialog();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->Hide();
	MyForm8^ obj10 = gcnew MyForm8(n17);
	obj10->ShowDialog();
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ websiteUrl = "http://192.168.0.116";
	System::Diagnostics::Process::Start(websiteUrl);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm19^ obj27 = gcnew MyForm19();
	obj27->ShowDialog();
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	MyForm9^ obj28 = gcnew MyForm9 (name,n3,n4,n5,n6,n16);
	obj28->ShowDialog();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm10^ obj29 = gcnew MyForm10(n18);
	obj29->ShowDialog();

}
};
}
