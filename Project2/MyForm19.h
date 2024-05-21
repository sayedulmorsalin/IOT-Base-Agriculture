#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm19
	/// </summary>
	public ref class MyForm19 : public System::Windows::Forms::Form
	{
	public:
		MyForm19(void)
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
		~MyForm19()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(198, 143);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(446, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ministry of Agriculture website";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm19::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(198, 226);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(446, 52);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Grievance redress system";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm19::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(198, 317);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(446, 50);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Complain and suggetion";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm19::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(192, 413);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(421, 32);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Phone Number 01712-479022";
			// 
			// MyForm19
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(862, 543);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm19";
			this->Text = L"Help and support";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ websiteUrl = "https://moa.gov.bd/";
		System::Diagnostics::Process::Start(websiteUrl);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ websiteUrl = "https://grs.gov.bd/";
	System::Diagnostics::Process::Start(websiteUrl);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ websiteUrl = "https://moa.gov.bd/forms/form/feedback-forms/opinion-&-complain/%E0%A6%AE%E0%A6%A4%E0%A6%BE%E0%A6%AE%E0%A6%A4/%E0%A6%AA%E0%A6%B0%E0%A6%BE%E0%A6%AE%E0%A6%B0%E0%A7%8D%E0%A6%B6-%E0%A6%AB%E0%A6%B0%E0%A6%AE";
	System::Diagnostics::Process::Start(websiteUrl);
}
};
}
