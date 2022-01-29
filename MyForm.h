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

	private:
		System::ComponentModel::Container^ components;

		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1300, 700);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Praise Editor";
			this->ResumeLayout(false);

		}
	};
}