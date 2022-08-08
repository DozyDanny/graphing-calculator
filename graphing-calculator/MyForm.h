#pragma once

namespace graphingcalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ goButton;
	private: System::Windows::Forms::Panel^ graphPanel;

	private: System::Windows::Forms::Label^ equationLabelY;

	private: System::Windows::Forms::Label^ equationLabelX;
	private: System::Windows::Forms::Label^ equationLabelPlus;



	private: System::Windows::Forms::TextBox^ equationTextBoxM;
	private: System::Windows::Forms::TextBox^ equationTextBoxExponent;
	private: System::Windows::Forms::TextBox^ equationTextBoxB;



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
			this->goButton = (gcnew System::Windows::Forms::Button());
			this->graphPanel = (gcnew System::Windows::Forms::Panel());
			this->equationLabelY = (gcnew System::Windows::Forms::Label());
			this->equationLabelX = (gcnew System::Windows::Forms::Label());
			this->equationLabelPlus = (gcnew System::Windows::Forms::Label());
			this->equationTextBoxM = (gcnew System::Windows::Forms::TextBox());
			this->equationTextBoxExponent = (gcnew System::Windows::Forms::TextBox());
			this->equationTextBoxB = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// goButton
			// 
			this->goButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->goButton->Location = System::Drawing::Point(12, 390);
			this->goButton->Name = L"goButton";
			this->goButton->Size = System::Drawing::Size(400, 59);
			this->goButton->TabIndex = 0;
			this->goButton->Text = L"GO";
			this->goButton->UseVisualStyleBackColor = true;
			this->goButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// graphPanel
			// 
			this->graphPanel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->graphPanel->Location = System::Drawing::Point(12, 12);
			this->graphPanel->Name = L"graphPanel";
			this->graphPanel->Size = System::Drawing::Size(400, 300);
			this->graphPanel->TabIndex = 1;
			// 
			// equationLabelY
			// 
			this->equationLabelY->AutoSize = true;
			this->equationLabelY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equationLabelY->Location = System::Drawing::Point(13, 331);
			this->equationLabelY->Name = L"equationLabelY";
			this->equationLabelY->Size = System::Drawing::Size(60, 39);
			this->equationLabelY->TabIndex = 2;
			this->equationLabelY->Text = L"Y=";
			// 
			// equationLabelX
			// 
			this->equationLabelX->AutoSize = true;
			this->equationLabelX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equationLabelX->Location = System::Drawing::Point(144, 332);
			this->equationLabelX->Name = L"equationLabelX";
			this->equationLabelX->Size = System::Drawing::Size(40, 39);
			this->equationLabelX->TabIndex = 3;
			this->equationLabelX->Text = L"X";
			// 
			// equationLabelPlus
			// 
			this->equationLabelPlus->AutoSize = true;
			this->equationLabelPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->equationLabelPlus->Location = System::Drawing::Point(204, 332);
			this->equationLabelPlus->Name = L"equationLabelPlus";
			this->equationLabelPlus->Size = System::Drawing::Size(37, 39);
			this->equationLabelPlus->TabIndex = 4;
			this->equationLabelPlus->Text = L"+";
			// 
			// equationTextBoxM
			// 
			this->equationTextBoxM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->equationTextBoxM->Location = System::Drawing::Point(67, 328);
			this->equationTextBoxM->Name = L"equationTextBoxM";
			this->equationTextBoxM->Size = System::Drawing::Size(79, 47);
			this->equationTextBoxM->TabIndex = 5;
			// 
			// equationTextBoxExponent
			// 
			this->equationTextBoxExponent->Location = System::Drawing::Point(190, 325);
			this->equationTextBoxExponent->Name = L"equationTextBoxExponent";
			this->equationTextBoxExponent->Size = System::Drawing::Size(20, 20);
			this->equationTextBoxExponent->TabIndex = 6;
			// 
			// equationTextBoxB
			// 
			this->equationTextBoxB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->equationTextBoxB->Location = System::Drawing::Point(247, 329);
			this->equationTextBoxB->Name = L"equationTextBoxB";
			this->equationTextBoxB->Size = System::Drawing::Size(46, 47);
			this->equationTextBoxB->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(423, 461);
			this->Controls->Add(this->equationTextBoxB);
			this->Controls->Add(this->equationTextBoxExponent);
			this->Controls->Add(this->equationTextBoxM);
			this->Controls->Add(this->equationLabelPlus);
			this->Controls->Add(this->equationLabelX);
			this->Controls->Add(this->equationLabelY);
			this->Controls->Add(this->graphPanel);
			this->Controls->Add(this->goButton);
			this->Name = L"MyForm";
			this->Text = L"Graphing Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
