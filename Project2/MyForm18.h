#pragma once

namespace Project2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for MyForm18
    /// </summary>
    public ref class MyForm18 : public System::Windows::Forms::Form
    {
    private:
        String^ name;
        int n1;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label15;
           int n2;

    public:
        MyForm18(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
        }
    public:
        MyForm18(String^ name, int n1, int n2)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
            this->name = name;
            this->n1 = n1;
            this->n2 = n2;

            this->label5->Text = name;
            if (n1 == 1)this->label6->Text = "Rice";
            else if (n1 == 2)this->label6->Text = "Potato";
            else if (n1 == 3)this->label6->Text = "Wheat";
            else if (n1 == 4)this->label6->Text = "Pepper";

            String^ totalProfit = n2.ToString();
            this->label7->Text = totalProfit + " KG";
            int price = n1 * 30;
            String^ ppkg = price.ToString();
            this->label8->Text = ppkg + " TK";
            int totalprice = price * n2;
            String^ tp = totalprice.ToString();
            this->label11->Text = tp + " TK";
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~MyForm18()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    protected:
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label11;




    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel1->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            this->tableLayoutPanel3->SuspendLayout();
            this->SuspendLayout();
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->ColumnCount = 2;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel1->Controls->Add(this->label6, 1, 1);
            this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->label5, 1, 0);
            this->tableLayoutPanel1->Controls->Add(this->label2, 0, 1);
            this->tableLayoutPanel1->Location = System::Drawing::Point(12, 89);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 2;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(901, 124);
            this->tableLayoutPanel1->TabIndex = 0;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(453, 62);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(60, 25);
            this->label6->TabIndex = 1;
            this->label6->Text = L"Rice ";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(3, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(136, 25);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Buyer Name ";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(453, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(221, 25);
            this->label5->TabIndex = 0;
            this->label5->Text = L"Md. Sayedul Marsalin";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(3, 62);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(124, 25);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Crop name ";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(15, 216);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(140, 25);
            this->label3->TabIndex = 1;
            this->label3->Text = L"Quantity(KG)";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(3, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(180, 25);
            this->label4->TabIndex = 2;
            this->label4->Text = L"Price per KG(TK)";
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->ColumnCount = 2;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel2->Controls->Add(this->label8, 1, 0);
            this->tableLayoutPanel2->Controls->Add(this->label4, 0, 0);
            this->tableLayoutPanel2->Location = System::Drawing::Point(12, 287);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 1;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(901, 67);
            this->tableLayoutPanel2->TabIndex = 3;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(453, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(48, 25);
            this->label8->TabIndex = 1;
            this->label8->Text = L"150";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(12, 357);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(159, 25);
            this->label14->TabIndex = 2;
            this->label14->Text = L"Total price(TK)";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(465, 216);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(48, 25);
            this->label7->TabIndex = 0;
            this->label7->Text = L"150";
            // 
            // tableLayoutPanel3
            // 
            this->tableLayoutPanel3->ColumnCount = 2;
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel3->Controls->Add(this->label12, 1, 0);
            this->tableLayoutPanel3->Controls->Add(this->label15, 0, 0);
            this->tableLayoutPanel3->Location = System::Drawing::Point(12, 418);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 1;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(901, 62);
            this->tableLayoutPanel3->TabIndex = 4;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(453, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(122, 25);
            this->label12->TabIndex = 1;
            this->label12->Text = L"23/05/2024";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(3, 0);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(57, 25);
            this->label15->TabIndex = 2;
            this->label15->Text = L"Date";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(465, 357);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(48, 25);
            this->label11->TabIndex = 0;
            this->label11->Text = L"150";
            // 
            // MyForm18
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(925, 753);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->tableLayoutPanel3);
            this->Controls->Add(this->tableLayoutPanel2);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->tableLayoutPanel1);
            this->Name = L"MyForm18";
            this->Text = L"MyForm18";
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel1->PerformLayout();
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel2->PerformLayout();
            this->tableLayoutPanel3->ResumeLayout(false);
            this->tableLayoutPanel3->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    };
}