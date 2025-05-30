#pragma once
#include "frmMantenimientoInvernadero.h"
#include "frmMantenimientoCultivo.h"
#include "frmMantenimientoTarea.h"
#include "frmMantenimientoCliente.h"
#include "frmMantenimientoUsuario.h"
#include "frmMantenimientoMaquinaTermica.h"
#include "frmMantenimientoEmpresa.h"
#include "frmMantenimientoDepartamento.h"


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
	private: System::Windows::Forms::ToolStripMenuItem^ tareaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clienteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ empresaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ departamentoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ maquinaTermicaToolStripMenuItem;
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
			this->tareaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->empresaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->departamentoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->maquinaTermicaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->mantenimientosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->invernaderoToolStripMenuItem,
					this->cultivoToolStripMenuItem, this->tareaToolStripMenuItem, this->usuarioToolStripMenuItem, this->clienteToolStripMenuItem,
					this->empresaToolStripMenuItem, this->departamentoToolStripMenuItem, this->maquinaTermicaToolStripMenuItem
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
			// tareaToolStripMenuItem
			// 
			this->tareaToolStripMenuItem->Name = L"tareaToolStripMenuItem";
			this->tareaToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->tareaToolStripMenuItem->Text = L"Tarea";
			this->tareaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::tareaToolStripMenuItem_Click);
			// 
			// usuarioToolStripMenuItem
			// 
			this->usuarioToolStripMenuItem->Name = L"usuarioToolStripMenuItem";
			this->usuarioToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->usuarioToolStripMenuItem->Text = L"Usuario";
			this->usuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::usuarioToolStripMenuItem_Click);
			// 
			// clienteToolStripMenuItem
			// 
			this->clienteToolStripMenuItem->Name = L"clienteToolStripMenuItem";
			this->clienteToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->clienteToolStripMenuItem->Text = L"Cliente";
			this->clienteToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::clienteToolStripMenuItem_Click);
			// 
			// empresaToolStripMenuItem
			// 
			this->empresaToolStripMenuItem->Name = L"empresaToolStripMenuItem";
			this->empresaToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->empresaToolStripMenuItem->Text = L"Empresa";
			this->empresaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::empresaToolStripMenuItem_Click);
			// 
			// departamentoToolStripMenuItem
			// 
			this->departamentoToolStripMenuItem->Name = L"departamentoToolStripMenuItem";
			this->departamentoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->departamentoToolStripMenuItem->Text = L"Departamento";
			this->departamentoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::departamentoToolStripMenuItem_Click);
			// 
			// maquinaTermicaToolStripMenuItem
			// 
			this->maquinaTermicaToolStripMenuItem->Name = L"maquinaTermicaToolStripMenuItem";
			this->maquinaTermicaToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->maquinaTermicaToolStripMenuItem->Text = L"Maquina Termica";
			this->maquinaTermicaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::maquinaTermicaToolStripMenuItem_Click);
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
	private: System::Void tareaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoTarea^ ventanaTarea = gcnew frmMantenimientoTarea();
		ventanaTarea->MdiParent = this;
		ventanaTarea->Show();
	}
	private: System::Void usuarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoUsuario^ ventanaUsuario = gcnew frmMantenimientoUsuario();
		ventanaUsuario->MdiParent = this;
		ventanaUsuario->Show();
	}
	private: System::Void clienteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoCliente^ ventanaCliente = gcnew frmMantenimientoCliente();
		ventanaCliente->MdiParent = this;
		ventanaCliente->Show();
	}
	private: System::Void maquinaTermicaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoMaquinaTermica^ ventanaMaquinaTermica = gcnew frmMantenimientoMaquinaTermica();
		ventanaMaquinaTermica->MdiParent = this;
		ventanaMaquinaTermica->Show();
	}
	private: System::Void departamentoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoDepartamento^ ventanaDepartamento = gcnew frmMantenimientoDepartamento();
		ventanaDepartamento->MdiParent = this;
		ventanaDepartamento->Show();
	}
	private: System::Void empresaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoEmpresa^ ventanaEmpresa = gcnew frmMantenimientoEmpresa();
		ventanaEmpresa->MdiParent = this;
		ventanaEmpresa->Show();
	}
};
}
