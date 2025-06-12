#pragma once
#include "frmNuevoMaquinaTermica.h"
#include "frmEditarMaquinaTermica.h"
namespace InvernaderoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace InvernaderoModel;
	using namespace InvernaderoController;

	/// <summary>
	/// Resumen de frmMantenimientoMaquinaTermica
	/// </summary>
	public ref class frmMantenimientoMaquinaTermica : public System::Windows::Forms::Form
	{
	public:
		frmMantenimientoMaquinaTermica(void)
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
		~frmMantenimientoMaquinaTermica()
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;








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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(445, 550);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantenimientoMaquinaTermica::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(337, 550);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantenimientoMaquinaTermica::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(227, 550);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantenimientoMaquinaTermica::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Location = System::Drawing::Point(31, 227);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(726, 287);
			this->groupBox2->TabIndex = 19;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Resultados de Búsqueda";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(22, 37);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(674, 222);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID:";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Tipo:";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Fabricante:";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Estado:";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(31, 25);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(726, 164);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Búsqueda";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(353, 52);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Fabricante:";
			this->label4->Click += gcnew System::EventHandler(this, &frmMantenimientoMaquinaTermica::label4_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(286, 108);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantenimientoMaquinaTermica::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(461, 52);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(169, 22);
			this->textBox2->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(47, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Tipo:";
			this->label2->Click += gcnew System::EventHandler(this, &frmMantenimientoMaquinaTermica::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(119, 49);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(169, 22);
			this->textBox1->TabIndex = 6;
			// 
			// frmMantenimientoMaquinaTermica
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(817, 604);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmMantenimientoMaquinaTermica";
			this->Text = L"Mantenimiento de Maquina Termica";
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ tipo = this->textBox1->Text;
	String^ fabricante = this->textBox2->Text;
	maquinaTermicaController^ maquinaTermController = gcnew maquinaTermicaController();
	List<MaquinaTermica^>^ listaMaquinaTermicas = maquinaTermController->buscarmaquinaTermicaxFabricantexTipo(tipo, fabricante);
	mostrarGrilla(listaMaquinaTermicas);
}
private: void mostrarGrilla(List<MaquinaTermica^>^ listaMaquinaTermicas) {
	this->dataGridView1->Rows->Clear();
	//La propiedad Count te indica la cantidad de elementos que contiene una lista
	for (int i = 0; i < listaMaquinaTermicas->Count; i++) {
		MaquinaTermica^ maquinaTermica = listaMaquinaTermicas[i];
		array<String^>^ fila = gcnew array<String^>(4);
		fila[0] = Convert::ToString(maquinaTermica->getId());
		fila[1] = maquinaTermica->getTipo();
		fila[2] = maquinaTermica->getFabricante();
		fila[3] = maquinaTermica->getEstado();
		this->dataGridView1->Rows->Add(fila);
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmNuevoMaquinaTermica^ ventanaNuevoMaquinaTerm = gcnew frmNuevoMaquinaTermica();
	ventanaNuevoMaquinaTerm->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count > 0)
	{
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		maquinaTermicaController^ maquinaTermController = gcnew maquinaTermicaController();
		maquinaTermController->eliminarmaquinaTermica(codigoEliminar);
		MessageBox::Show("La Maquina Termica ha sido eliminada exitosamente");
		this->dataGridView1->Rows->Clear();
	}
	else
	{
		MessageBox::Show("Por favor, seleccione una maquina termica para eliminar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count > 0)
	{
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		maquinaTermicaController^ maquinaTermController = gcnew maquinaTermicaController();
		MaquinaTermica^ maquinaTermica = maquinaTermController->buscarmaquinaTermicaxCodigo(codigoEditar);
		frmEditarMaquinaTermica^ ventanaEditarMaquinaTermica = gcnew frmEditarMaquinaTermica(maquinaTermica);
		ventanaEditarMaquinaTermica->ShowDialog();
		List<MaquinaTermica^>^ listaMaquinaTermicas = maquinaTermController->buscarTodos();
		mostrarGrilla(listaMaquinaTermicas);
	}
	else
	{
		MessageBox::Show("Por favor, seleccione una maquina termica para editar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
};
}
