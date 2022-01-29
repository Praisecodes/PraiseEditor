#pragma once
#include <Windows.h>

namespace PraiseEditor {
	using namespace System;
	using namespace System::Collections;
	using namespace System::ComponentModel;
	using namespace System::Drawing;
	using namespace System::Data;
	using namespace System::Windows::Forms;

	

	public ref class MyForm: public System::Windows::Forms::Form {
	public:
		MyForm(void) {
			InitializeComponent();
		}
	protected:
		~MyForm() {
			delete components;
		}

	private: System::Windows::Forms::TextBox^ editBox;


	protected:

	private:
		System::ComponentModel::Container^ components;

		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->editBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// editBox
			// 
			this->editBox->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editBox->Location = System::Drawing::Point(0, 0);
			this->editBox->Multiline = true;
			this->editBox->Name = L"editBox";
			this->editBox->Size = System::Drawing::Size(1300, 700);
			this->editBox->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1300, 700);
			this->Controls->Add(this->editBox);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Praise Editor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	};
}