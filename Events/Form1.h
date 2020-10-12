#pragma once

namespace WindowsFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  LHeader1;
	protected: 
	private: System::Windows::Forms::Label^  LMessage;
	private: System::Windows::Forms::Label^  LHeader2;
	private: System::Windows::Forms::TextBox^  TTextControl;
	private: System::Windows::Forms::Button^  BExit;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->LHeader1 = (gcnew System::Windows::Forms::Label());
			this->LMessage = (gcnew System::Windows::Forms::Label());
			this->LHeader2 = (gcnew System::Windows::Forms::Label());
			this->TTextControl = (gcnew System::Windows::Forms::TextBox());
			this->BExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LHeader1
			// 
			this->LHeader1->AutoSize = true;
			this->LHeader1->Location = System::Drawing::Point(78, 31);
			this->LHeader1->Name = L"LHeader1";
			this->LHeader1->Size = System::Drawing::Size(104, 13);
			this->LHeader1->TabIndex = 0;
			this->LHeader1->Text = L"Просмотр события";
			this->LHeader1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// LMessage
			// 
			this->LMessage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->LMessage->Location = System::Drawing::Point(27, 65);
			this->LMessage->Name = L"LMessage";
			this->LMessage->Size = System::Drawing::Size(213, 23);
			this->LMessage->TabIndex = 1;
			this->LMessage->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LHeader2
			// 
			this->LHeader2->AutoSize = true;
			this->LHeader2->Location = System::Drawing::Point(86, 126);
			this->LHeader2->Name = L"LHeader2";
			this->LHeader2->Size = System::Drawing::Size(78, 13);
			this->LHeader2->TabIndex = 2;
			this->LHeader2->Text = L"Ввод события";
			// 
			// TTextControl
			// 
			this->TTextControl->Location = System::Drawing::Point(81, 156);
			this->TTextControl->Name = L"TTextControl";
			this->TTextControl->Size = System::Drawing::Size(101, 20);
			this->TTextControl->TabIndex = 3;
			this->TTextControl->Click += gcnew System::EventHandler(this, &Form1::TTextControl_Click);
			this->TTextControl->TextChanged += gcnew System::EventHandler(this, &Form1::TTextControl_TextChanged);
			this->TTextControl->DoubleClick += gcnew System::EventHandler(this, &Form1::TTextControl_DoubleClick);
			this->TTextControl->MouseEnter += gcnew System::EventHandler(this, &Form1::TTextControl_MouseEnter);
			this->TTextControl->MouseLeave += gcnew System::EventHandler(this, &Form1::TTextControl_MouseLeave);
			// 
			// BExit
			// 
			this->BExit->Location = System::Drawing::Point(93, 202);
			this->BExit->Name = L"BExit";
			this->BExit->Size = System::Drawing::Size(75, 23);
			this->BExit->TabIndex = 4;
			this->BExit->Text = L"Выход";
			this->BExit->UseVisualStyleBackColor = true;
			this->BExit->Click += gcnew System::EventHandler(this, &Form1::BExit_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->BExit);
			this->Controls->Add(this->TTextControl);
			this->Controls->Add(this->LHeader2);
			this->Controls->Add(this->LMessage);
			this->Controls->Add(this->LHeader1);
			this->Name = L"Form1";
			this->Text = L"События";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BExit_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }
private: System::Void TTextControl_Click(System::Object^  sender, System::EventArgs^  e) {
			 LMessage->Text = "Клик";
		 }
private: System::Void TTextControl_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 LMessage->Text = "Двойной клик";
		 }
private: System::Void TTextControl_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 LMessage->Text = "Мышь в поле действия";
		 }
private: System::Void TTextControl_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 LMessage->Text = "Мышь вне поля действия";
		 }
private: System::Void TTextControl_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 LMessage->Text = "Набор текста";
		 }
};
}

