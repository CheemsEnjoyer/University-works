#pragma once

namespace hospital {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для RedactForm
	/// </summary>
	public ref class RedactForm : public System::Windows::Forms::Form
	{
	public:
		RedactForm(void)
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
		~RedactForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ textBoxName;
	protected:

	protected:





















	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;



	private: System::Windows::Forms::Label^ labelPatientID;
	private: System::Windows::Forms::Label^ labelillness;
	private: System::Windows::Forms::Label^ Doctor;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	public: System::Windows::Forms::TextBox^ textBoxPatientID;
	public: System::Windows::Forms::TextBox^ textBoxillness;
	public: System::Windows::Forms::TextBox^ textBoxDoctor;
	private: System::Windows::Forms::Label^ labelName;
	private: System::Windows::Forms::Label^ labelDateOfBirth;
	public: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private:
	public:
	private:



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->labelPatientID = (gcnew System::Windows::Forms::Label());
			this->labelillness = (gcnew System::Windows::Forms::Label());
			this->Doctor = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBoxPatientID = (gcnew System::Windows::Forms::TextBox());
			this->textBoxillness = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDoctor = (gcnew System::Windows::Forms::TextBox());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->labelDateOfBirth = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(153, 49);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(125, 22);
			this->textBoxName->TabIndex = 7;
			this->textBoxName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RedactForm::textBoxNumber_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(244, 352);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Редактировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RedactForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(130, 352);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 23);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RedactForm::button2_Click);
			// 
			// labelPatientID
			// 
			this->labelPatientID->AutoSize = true;
			this->labelPatientID->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPatientID->Location = System::Drawing::Point(23, 156);
			this->labelPatientID->Name = L"labelPatientID";
			this->labelPatientID->Size = System::Drawing::Size(109, 19);
			this->labelPatientID->TabIndex = 19;
			this->labelPatientID->Text = L"Номер полиса";
			// 
			// labelillness
			// 
			this->labelillness->AutoSize = true;
			this->labelillness->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelillness->Location = System::Drawing::Point(23, 207);
			this->labelillness->Name = L"labelillness";
			this->labelillness->Size = System::Drawing::Size(67, 19);
			this->labelillness->TabIndex = 20;
			this->labelillness->Text = L"Диагноз";
			// 
			// Doctor
			// 
			this->Doctor->AutoSize = true;
			this->Doctor->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Doctor->Location = System::Drawing::Point(23, 250);
			this->Doctor->Name = L"Doctor";
			this->Doctor->Size = System::Drawing::Size(43, 19);
			this->Doctor->TabIndex = 21;
			this->Doctor->Text = L"Врач";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(23, 289);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 19);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Дата посещения";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(153, 286);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(125, 22);
			this->dateTimePicker1->TabIndex = 23;
			// 
			// textBoxPatientID
			// 
			this->textBoxPatientID->Location = System::Drawing::Point(153, 153);
			this->textBoxPatientID->Name = L"textBoxPatientID";
			this->textBoxPatientID->Size = System::Drawing::Size(125, 22);
			this->textBoxPatientID->TabIndex = 24;
			this->textBoxPatientID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RedactForm::textBoxPatientID_TextChanged);
			// 
			// textBoxillness
			// 
			this->textBoxillness->Location = System::Drawing::Point(153, 204);
			this->textBoxillness->Name = L"textBoxillness";
			this->textBoxillness->Size = System::Drawing::Size(125, 22);
			this->textBoxillness->TabIndex = 25;
			this->textBoxillness->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RedactForm::textBoxillness_TextChanged);
			// 
			// textBoxDoctor
			// 
			this->textBoxDoctor->Location = System::Drawing::Point(153, 247);
			this->textBoxDoctor->Name = L"textBoxDoctor";
			this->textBoxDoctor->Size = System::Drawing::Size(125, 22);
			this->textBoxDoctor->TabIndex = 26;
			this->textBoxDoctor->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RedactForm::textBoxDoctor_TextChanged);
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelName->Location = System::Drawing::Point(23, 52);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(54, 19);
			this->labelName->TabIndex = 27;
			this->labelName->Text = L"Ф.И.О";
			// 
			// labelDateOfBirth
			// 
			this->labelDateOfBirth->AutoSize = true;
			this->labelDateOfBirth->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelDateOfBirth->Location = System::Drawing::Point(23, 104);
			this->labelDateOfBirth->Name = L"labelDateOfBirth";
			this->labelDateOfBirth->Size = System::Drawing::Size(115, 19);
			this->labelDateOfBirth->TabIndex = 28;
			this->labelDateOfBirth->Text = L"Дата рождения";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CalendarFont = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker2->Location = System::Drawing::Point(153, 101);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(125, 22);
			this->dateTimePicker2->TabIndex = 29;
			// 
			// RedactForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(389, 390);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->labelDateOfBirth);
			this->Controls->Add(this->labelName);
			this->Controls->Add(this->textBoxDoctor);
			this->Controls->Add(this->textBoxillness);
			this->Controls->Add(this->textBoxPatientID);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Doctor);
			this->Controls->Add(this->labelillness);
			this->Controls->Add(this->labelPatientID);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxName);
			this->Name = L"RedactForm";
			this->Text = L"Редактировать";
			this->Load += gcnew System::EventHandler(this, &RedactForm::RedactForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RedactForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = this->textBoxName->Text;
	String^ dateOfBirth = this->dateTimePicker2->Text;
	String^ patientID = this->textBoxPatientID->Text;
	String^ illness = this->textBoxillness->Text;
	String^ doctor = this->textBoxDoctor->Text;
	String^ DateOfVisit = this->dateTimePicker1->Text;
	if (name->Length == 0 || dateOfBirth->Length == 0 || patientID->Length == 0 || illness->Length == 0 || doctor->Length == 0 || DateOfVisit->Length == 0) {
		MessageBox::Show("Заполните все поля", "Нужно заполнить все поля!", MessageBoxButtons::OK);
	}
	else {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
}
private: System::Void textBoxNumber_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (textBoxName->Text->Length > 0) {
		textBoxName->Text = textBoxName->Text->Substring(0, 1)->ToUpper() + textBoxName->Text->Substring(1);
		textBoxName->SelectionStart = textBoxName->Text->Length;
	}
	if (!Char::IsLetter(e->KeyChar) && !Char::IsControl(e->KeyChar) && !Char::IsWhiteSpace(e->KeyChar) && e->KeyChar != '.') {
		e->Handled = true;
	}
	if (e->KeyChar == (char)Keys::Enter) {
		textBoxPatientID->Focus();
		e->Handled = true;
	}
}
private: System::Void textBoxPatientID_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar) && e->KeyChar != '.') {
		e->Handled = true;
	}
	if (e->KeyChar == (char)Keys::Enter) {
		textBoxillness->Focus();
		e->Handled = true;
	}
}
private: System::Void textBoxillness_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (char)Keys::Enter) {
		textBoxDoctor->Focus();
		e->Handled = true;
	}
}
private: System::Void textBoxDoctor_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (textBoxDoctor->Text->Length > 0) {
		textBoxDoctor->Text = textBoxDoctor->Text->Substring(0, 1)->ToUpper() + textBoxDoctor->Text->Substring(1);
		textBoxDoctor->SelectionStart = textBoxDoctor->Text->Length;
	}
	if (!Char::IsLetter(e->KeyChar) && !Char::IsControl(e->KeyChar) && !Char::IsWhiteSpace(e->KeyChar) && e->KeyChar != '.') {
		e->Handled = true;
	}
	if (e->KeyChar == (char)Keys::Enter) {
		textBoxName->Focus();
		e->Handled = true;
	}
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

}
};
}
