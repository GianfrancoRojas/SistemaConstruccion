#pragma once
#include "frmMantEdificios.h"

namespace SistemaConstruccionView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ proyectosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ edificiosToolStripMenuItem;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->proyectosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edificiosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->proyectosToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(653, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// proyectosToolStripMenuItem
			// 
			this->proyectosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->edificiosToolStripMenuItem });
			this->proyectosToolStripMenuItem->Name = L"proyectosToolStripMenuItem";
			this->proyectosToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->proyectosToolStripMenuItem->Text = L"Proyectos";
			this->proyectosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::proyectosToolStripMenuItem_Click);
			// 
			// edificiosToolStripMenuItem
			// 
			this->edificiosToolStripMenuItem->Name = L"edificiosToolStripMenuItem";
			this->edificiosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->edificiosToolStripMenuItem->Text = L"Edificios";
			this->edificiosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::edificiosToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(653, 453);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmPrincipal";
			this->Text = L"Sistema Construccion";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void proyectosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void edificiosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantEdificios^ ventanaMantEdificios = gcnew frmMantEdificios();
		ventanaMantEdificios->MdiParent = this;
		ventanaMantEdificios->Show();
	}
	};
}
