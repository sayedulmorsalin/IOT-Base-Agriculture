#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm10
	/// </summary>
	public ref class MyForm10 : public System::Windows::Forms::Form
	{
	private:
		int crop;

	public:
		MyForm10(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		MyForm10(int n1)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->crop = n1;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm10()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(179, 216);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(372, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Moisture of your land is 25";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(652, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 72);
			this->label2->TabIndex = 1;
			this->label2->Text = L".";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm10::label2_Click);
			// 
			// MyForm10
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(815, 584);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm10";
			this->Text = L"Moisture";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
		crop = crop + 5;
		String^ update = "Moisture of your land is " + crop.ToString();
		this->label1->Text = update;
	}
	};
}
