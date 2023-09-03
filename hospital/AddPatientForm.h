#pragma once

namespace hospital {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddPatientForm
	/// </summary>
	public ref class AddPatientForm : public System::Windows::Forms::Form
	{
	public:
		AddPatientForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		
		property array<System::String^>^ InputValues {
			array<System::String^>^ get() {
				array<System::String^>^ values = gcnew array<System::String^>(7);
				values[1] = textBoxName->Text;
				values[2] = textBoxDateOfBirth->Text;
				values[3] = textBoxPatientID->Text;
				values[4] = textBoxillness->Text;
				values[5] = textBoxDoctor->Text;
				values[6] = textBoxDateOfVisit->Text;
				return values;
			}
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AddPatientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelName;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::Label^ labelDateOfBirth;

	private: System::Windows::Forms::TextBox^ textBoxPatientID;
	private: System::Windows::Forms::Label^ labelPatientID;
	private: System::Windows::Forms::Label^ labelillness;
	private: System::Windows::Forms::TextBox^ textBoxillness;

	private: System::Windows::Forms::Label^ Doctor;
	private: System::Windows::Forms::TextBox^ textBoxDoctor;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ CancelButton;
	private: System::Windows::Forms::Button^ AddPatientButton;
	private: System::Windows::Forms::DateTimePicker^ textBoxDateOfBirth;
	private: System::Windows::Forms::DateTimePicker^ textBoxDateOfVisit;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddPatientForm::typeid));
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->labelDateOfBirth = (gcnew System::Windows::Forms::Label());
			this->textBoxPatientID = (gcnew System::Windows::Forms::TextBox());
			this->labelPatientID = (gcnew System::Windows::Forms::Label());
			this->labelillness = (gcnew System::Windows::Forms::Label());
			this->textBoxillness = (gcnew System::Windows::Forms::TextBox());
			this->Doctor = (gcnew System::Windows::Forms::Label());
			this->textBoxDoctor = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->AddPatientButton = (gcnew System::Windows::Forms::Button());
			this->textBoxDateOfBirth = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBoxDateOfVisit = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelName->Location = System::Drawing::Point(35, 21);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(54, 19);
			this->labelName->TabIndex = 0;
			this->labelName->Text = L"Ф.И.О";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(165, 21);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(267, 22);
			this->textBoxName->TabIndex = 1;
			this->textBoxName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddPatientForm::textBoxName_TextChanged);
			// 
			// labelDateOfBirth
			// 
			this->labelDateOfBirth->AutoSize = true;
			this->labelDateOfBirth->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelDateOfBirth->Location = System::Drawing::Point(35, 58);
			this->labelDateOfBirth->Name = L"labelDateOfBirth";
			this->labelDateOfBirth->Size = System::Drawing::Size(115, 19);
			this->labelDateOfBirth->TabIndex = 2;
			this->labelDateOfBirth->Text = L"Дата рождения";
			// 
			// textBoxPatientID
			// 
			this->textBoxPatientID->Location = System::Drawing::Point(165, 92);
			this->textBoxPatientID->Name = L"textBoxPatientID";
			this->textBoxPatientID->Size = System::Drawing::Size(267, 22);
			this->textBoxPatientID->TabIndex = 4;
			this->textBoxPatientID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddPatientForm::textBoxPatientID_TextChanged);
			// 
			// labelPatientID
			// 
			this->labelPatientID->AutoSize = true;
			this->labelPatientID->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPatientID->Location = System::Drawing::Point(35, 93);
			this->labelPatientID->Name = L"labelPatientID";
			this->labelPatientID->Size = System::Drawing::Size(109, 19);
			this->labelPatientID->TabIndex = 5;
			this->labelPatientID->Text = L"Номер полиса";
			// 
			// labelillness
			// 
			this->labelillness->AutoSize = true;
			this->labelillness->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelillness->Location = System::Drawing::Point(33, 136);
			this->labelillness->Name = L"labelillness";
			this->labelillness->Size = System::Drawing::Size(67, 19);
			this->labelillness->TabIndex = 6;
			this->labelillness->Text = L"Диагноз";
			// 
			// textBoxillness
			// 
			this->textBoxillness->Location = System::Drawing::Point(165, 133);
			this->textBoxillness->Name = L"textBoxillness";
			this->textBoxillness->Size = System::Drawing::Size(267, 22);
			this->textBoxillness->TabIndex = 7;
			this->textBoxillness->TextChanged += gcnew System::EventHandler(this, &AddPatientForm::textBoxillness_TextChanged);
			this->textBoxillness->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddPatientForm::textBoxillness_KeyPress);
			// 
			// Doctor
			// 
			this->Doctor->AutoSize = true;
			this->Doctor->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Doctor->Location = System::Drawing::Point(35, 176);
			this->Doctor->Name = L"Doctor";
			this->Doctor->Size = System::Drawing::Size(43, 19);
			this->Doctor->TabIndex = 8;
			this->Doctor->Text = L"Врач";
			// 
			// textBoxDoctor
			// 
			this->textBoxDoctor->Location = System::Drawing::Point(165, 175);
			this->textBoxDoctor->Name = L"textBoxDoctor";
			this->textBoxDoctor->Size = System::Drawing::Size(267, 22);
			this->textBoxDoctor->TabIndex = 9;
			this->textBoxDoctor->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddPatientForm::textBoxDoctor_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(35, 219);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 19);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Дата посещения";
			// 
			// CancelButton
			// 
			this->CancelButton->Location = System::Drawing::Point(175, 274);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(75, 23);
			this->CancelButton->TabIndex = 12;
			this->CancelButton->Text = L"Отмена";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &AddPatientForm::CancelButton_Click);
			// 
			// AddPatientButton
			// 
			this->AddPatientButton->Location = System::Drawing::Point(280, 274);
			this->AddPatientButton->Name = L"AddPatientButton";
			this->AddPatientButton->Size = System::Drawing::Size(100, 23);
			this->AddPatientButton->TabIndex = 13;
			this->AddPatientButton->Text = L"Записать";
			this->AddPatientButton->UseVisualStyleBackColor = true;
			this->AddPatientButton->Click += gcnew System::EventHandler(this, &AddPatientForm::AddPatientButton_Click);
			// 
			// textBoxDateOfBirth
			// 
			this->textBoxDateOfBirth->CalendarFont = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxDateOfBirth->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->textBoxDateOfBirth->Location = System::Drawing::Point(165, 58);
			this->textBoxDateOfBirth->Name = L"textBoxDateOfBirth";
			this->textBoxDateOfBirth->Size = System::Drawing::Size(267, 22);
			this->textBoxDateOfBirth->TabIndex = 14;
			// 
			// textBoxDateOfVisit
			// 
			this->textBoxDateOfVisit->CalendarFont = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxDateOfVisit->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->textBoxDateOfVisit->Location = System::Drawing::Point(165, 219);
			this->textBoxDateOfVisit->Name = L"textBoxDateOfVisit";
			this->textBoxDateOfVisit->Size = System::Drawing::Size(267, 22);
			this->textBoxDateOfVisit->TabIndex = 15;
			// 
			// AddPatientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->ClientSize = System::Drawing::Size(477, 318);
			this->Controls->Add(this->textBoxDateOfVisit);
			this->Controls->Add(this->textBoxDateOfBirth);
			this->Controls->Add(this->AddPatientButton);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxDoctor);
			this->Controls->Add(this->Doctor);
			this->Controls->Add(this->textBoxillness);
			this->Controls->Add(this->labelillness);
			this->Controls->Add(this->labelPatientID);
			this->Controls->Add(this->textBoxPatientID);
			this->Controls->Add(this->labelDateOfBirth);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->labelName);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AddPatientForm";
			this->Text = L"Запись пациента";
			this->Load += gcnew System::EventHandler(this, &AddPatientForm::AddPatientForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

private: System::Void AddPatientButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = this->textBoxName->Text;
	String^ dateOfBirth = this->textBoxDateOfBirth->Text;
	String^ patientID = this->textBoxName->Text;
	String^ illness = this->textBoxName->Text;
	String^ doctor = this->textBoxName->Text;
	String^ DateOfVisit = this->textBoxName->Text;
	if (name->Length == 0 || dateOfBirth->Length == 0 || patientID->Length == 0 || illness->Length == 0 || doctor->Length == 0 || DateOfVisit->Length == 0) {
		MessageBox::Show("Заполните все поля", "Нужно заполнить все поля!", MessageBoxButtons::OK);
	}
	else {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
	}
private: System::Void AddPatientForm_Load(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void textBoxName_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
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
private: System::Void textBoxillness_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (char)Keys::Enter) {
		textBoxDoctor->Focus();
		e->Handled = true;
	}
}
private: System::Void textBoxillness_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxillness->Text->Length > 0) {
		textBoxillness->Text = textBoxillness->Text->Substring(0, 1)->ToUpper() + textBoxillness->Text->Substring(1);
		textBoxillness->SelectionStart = textBoxillness->Text->Length;
	}
}
};

}
