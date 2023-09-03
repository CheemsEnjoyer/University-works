#pragma once

namespace hospital {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ChronicPatients
	/// </summary>
	public ref class ChronicPatients : public System::Windows::Forms::Form
	{
	public:
		ChronicPatients(void)
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
		~ChronicPatients()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DateOfBirth2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PatientID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ illness2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Doctor2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DateOfVisit2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Number2;
	protected:







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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Number2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DateOfBirth2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PatientID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->illness2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Doctor2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DateOfVisit2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::PeachPuff;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Number2,
					this->Name2, this->DateOfBirth2, this->PatientID, this->illness2, this->Doctor2, this->DateOfVisit2
			});
			this->dataGridView1->Location = System::Drawing::Point(3, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1217, 525);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ChronicPatients::dataGridView1_CellContentClick);
			// 
			// Number2
			// 
			this->Number2->HeaderText = L"Номер";
			this->Number2->MinimumWidth = 6;
			this->Number2->Name = L"Number2";
			this->Number2->ReadOnly = true;
			this->Number2->Width = 125;
			// 
			// Name2
			// 
			this->Name2->HeaderText = L"Ф.И.О";
			this->Name2->MinimumWidth = 6;
			this->Name2->Name = L"Name2";
			this->Name2->ReadOnly = true;
			this->Name2->Width = 125;
			// 
			// DateOfBirth2
			// 
			this->DateOfBirth2->HeaderText = L"Дата рождения";
			this->DateOfBirth2->MinimumWidth = 6;
			this->DateOfBirth2->Name = L"DateOfBirth2";
			this->DateOfBirth2->ReadOnly = true;
			this->DateOfBirth2->Width = 125;
			// 
			// PatientID
			// 
			this->PatientID->HeaderText = L"Номер полиса";
			this->PatientID->MinimumWidth = 6;
			this->PatientID->Name = L"PatientID";
			this->PatientID->ReadOnly = true;
			this->PatientID->Width = 125;
			// 
			// illness2
			// 
			this->illness2->HeaderText = L"Диагноз";
			this->illness2->MinimumWidth = 6;
			this->illness2->Name = L"illness2";
			this->illness2->ReadOnly = true;
			this->illness2->Width = 125;
			// 
			// Doctor2
			// 
			this->Doctor2->HeaderText = L"Врач";
			this->Doctor2->MinimumWidth = 6;
			this->Doctor2->Name = L"Doctor2";
			this->Doctor2->ReadOnly = true;
			this->Doctor2->Width = 125;
			// 
			// DateOfVisit2
			// 
			this->DateOfVisit2->HeaderText = L"Дата посещения";
			this->DateOfVisit2->MinimumWidth = 6;
			this->DateOfVisit2->Name = L"DateOfVisit2";
			this->DateOfVisit2->ReadOnly = true;
			this->DateOfVisit2->Width = 125;
			// 
			// ChronicPatients
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1215, 518);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ChronicPatients";
			this->Text = L"Пациенты с хроническими болезнями";
			this->Load += gcnew System::EventHandler(this, &ChronicPatients::ChronicPatients_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	public:
		void AddRowToDataGridView(array<Object^>^ values)
		{
			dataGridView1->Rows->Add(values);
		}
private: System::Void ChronicPatients_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
