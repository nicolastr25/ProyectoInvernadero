#pragma once
#include "frmMantenimientoInvernadero.h"
#include "frmMantenimientoCultivo.h"


namespace InvernaderoView {

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
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ invernaderoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cultivoToolStripMenuItem;
	protected:



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
			this->mantenimientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->invernaderoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cultivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mantenimientosToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(813, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mantenimientosToolStripMenuItem
			// 
			this->mantenimientosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->invernaderoToolStripMenuItem,
					this->cultivoToolStripMenuItem
			});
			this->mantenimientosToolStripMenuItem->Name = L"mantenimientosToolStripMenuItem";
			this->mantenimientosToolStripMenuItem->Size = System::Drawing::Size(106, 20);
			this->mantenimientosToolStripMenuItem->Text = L"Mantenimientos";
			// 
			// invernaderoToolStripMenuItem
			// 
			this->invernaderoToolStripMenuItem->Name = L"invernaderoToolStripMenuItem";
			this->invernaderoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->invernaderoToolStripMenuItem->Text = L"Invernadero";
			this->invernaderoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::invernaderoToolStripMenuItem_Click);
			// 
			// cultivoToolStripMenuItem
			// 
			this->cultivoToolStripMenuItem->Name = L"cultivoToolStripMenuItem";
			this->cultivoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->cultivoToolStripMenuItem->Text = L"Cultivo";
			this->cultivoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::cultivoToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(813, 530);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmPrincipal";
			this->Text = L"frmPrincipal";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mantenimientoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void cultivoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoCultivo^ ventanaCultivo = gcnew frmMantenimientoCultivo();
		ventanaCultivo->MdiParent = this;
		ventanaCultivo->Show();
	}
	private: System::Void invernaderoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoInvernadero^ ventanaInvernadero = gcnew frmMantenimientoInvernadero();
		ventanaInvernadero->MdiParent = this;
		ventanaInvernadero->Show();
	}
};
}
