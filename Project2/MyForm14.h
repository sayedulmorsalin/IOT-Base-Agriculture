#pragma once
#include"MyForm15.h"
#include"MyForm16.h"
#include"MyForm17.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm14
	/// </summary>
	public ref class MyForm14 : public System::Windows::Forms::Form
	{
	public:
		MyForm14(void)
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
		~MyForm14()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Teal;
			this->button4->Location = System::Drawing::Point(240, 369);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(441, 72);
			this->button4->TabIndex = 12;
			this->button4->Text = L"growing crop";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm14::button4_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Teal;
			this->button2->Location = System::Drawing::Point(240, 277);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(441, 72);
			this->button2->TabIndex = 10;
			this->button2->Text = L"comming soon ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm14::button2_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(191, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(523, 54);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Welcome to dashboard";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Teal;
			this->button1->Location = System::Drawing::Point(240, 183);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(441, 72);
			this->button1->TabIndex = 8;
			this->button1->Text = L"crop for sell";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm14::button1_Click);
			// 
			// MyForm14
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->ClientSize = System::Drawing::Size(967, 524);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm14";
			this->Text = L"Buyer dashboard";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm15^ obj19 = gcnew MyForm15();
		obj19->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm16^ obj20 = gcnew MyForm16();
		obj20->ShowDialog();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm17^ obj21 = gcnew MyForm17();
		obj21->ShowDialog();
	}
};
}
