#pragma once
#include "frmEditarInvernadero.h"
#include "frmNuevoInvernadero.h"
#include "frmInfoInvernadero.h"

namespace InvernaderoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace InvernaderoController;
	using namespace InvernaderoModel;

	/// <summary>
	/// Resumen de frmMantenimientoInvernadero
	/// </summary>
	public ref class frmMantenimientoInvernadero : public System::Windows::Forms::Form
	{
	public:
		frmMantenimientoInvernadero(void)
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
		~frmMantenimientoInvernadero()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::Button^ button5;






	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(290, 475);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 19);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantenimientoInvernadero::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(209, 475);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 19);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantenimientoInvernadero::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(126, 475);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 19);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantenimientoInvernadero::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Location = System::Drawing::Point(39, 218);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(413, 233);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Resultados de Búsqueda";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(38, 30);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(341, 180);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Ubicacion";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(39, 11);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(599, 163);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Búsqueda";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(329, 53);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Ubicación:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(251, 103);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 19);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantenimientoInvernadero::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(407, 53);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(128, 20);
			this->textBox2->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 53);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Nombre:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(111, 53);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(128, 20);
			this->textBox1->TabIndex = 6;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(533, 324);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(67, 19);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Consultar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmMantenimientoInvernadero::button5_Click);
			// 
			// frmMantenimientoInvernadero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 531);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMantenimientoInvernadero";
			this->Text = L"frmMantenimientoInvernadero";
			this->Load += gcnew System::EventHandler(this, &frmMantenimientoInvernadero::frmMantenimientoInvernadero_Load);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = this->textBox1->Text;
		InvernaderoCController^ invernaderoController = gcnew InvernaderoCController();
		List<Invernadero^>^ listaInvernaderos = invernaderoController->buscarInvernaderoxNombre_(nombre);
		mostrarGrilla(listaInvernaderos);
	}
	private: void mostrarGrilla(List<Invernadero^>^ listaInvernaderos) {
		this->dataGridView1->Rows->Clear();
		//La propiedad Count te indica la cantidad de elementos que contiene una lista
		for (int i = 0; i < listaInvernaderos->Count; i++) {
			Invernadero^ invernadero = listaInvernaderos[i];
			array<String^>^ fila = gcnew array<String^>(6);
			fila[0] = invernadero->getNombre();
			fila[1] = invernadero->getUbicacion();
			this->dataGridView1->Rows->Add(fila);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ nombreEliminar = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
		InvernaderoCController^ invernaderoController = gcnew InvernaderoCController();
		invernaderoController->eliminarInvernadero(nombreEliminar);
		MessageBox::Show("El Invernadero ha sido eliminado exitosamente");
		this->dataGridView1->Rows->Clear();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmNuevoInvernadero^ ventanaNuevoInvernadero = gcnew frmNuevoInvernadero();
		ventanaNuevoInvernadero->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ nombreEditar = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
		InvernaderoCController^ invernaderoController = gcnew InvernaderoCController();
		Invernadero^ invernadero = invernaderoController->buscarInvernaderoxNombre(nombreEditar);
		frmEditarInvernadero^ ventanaEditarInvernadero = gcnew frmEditarInvernadero(invernadero);
		ventanaEditarInvernadero->ShowDialog();
		List<Invernadero^>^ listaInvernaderos = invernaderoController->buscarTodos();
		mostrarGrilla(listaInvernaderos);
	}
	private: System::Void frmMantenimientoInvernadero_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		frmInfoInvernadero^ ventanaInfoInvernadero = gcnew frmInfoInvernadero();
		ventanaInfoInvernadero->Show();
	}
	};
}
