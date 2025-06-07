#pragma once

#include "frmNuevoInvernadero.h"
#include "frmInfoDetalleInvernadero.h"

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
	/// Resumen de frmInfoInvernadero
	/// </summary>
	public ref class frmInfoInvernadero : public System::Windows::Forms::Form
	{
	public:
		frmInfoInvernadero(void)
		{
			InitializeComponent();
			InvernaderoCController^ invernaderoController = gcnew InvernaderoCController();
			this->listaInvernadero = invernaderoController->buscarTodos();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmInfoInvernadero()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: List<Invernadero^>^ listaInvernadero;
	protected:

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(43, 42);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(514, 493);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmInfoInvernadero::panel1_Paint);
			this->panel1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frmInfoInvernadero::panel1_MouseClick);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(814, 431);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(77, 19);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Ver Detalles";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmInfoInvernadero::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(689, 431);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 19);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Nuevo";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmInfoInvernadero::button4_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Location = System::Drawing::Point(617, 145);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(335, 246);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos de Invernaderos";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(174, 166);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(174, 125);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(174, 85);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(174, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(40, 169);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Usuario:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(40, 125);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Zona:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(40, 85);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Ubicacion:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(40, 45);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(47, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Nombre:";
			// 
			// frmInfoInvernadero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1004, 581);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->panel1);
			this->Name = L"frmInfoInvernadero";
			this->Text = L"frmInfoInvernadero";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		frmNuevoInvernadero^ ventanaNuevoInvernadero = gcnew frmNuevoInvernadero();
		ventanaNuevoInvernadero->ShowDialog();
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ graphics = e->Graphics;
		int x = 20, y;
		for (int i = 0; i < this->listaInvernadero->Count; i++) {
			String^ ubicacion = this->listaInvernadero[i]->getUbicacion();
			Pen^ lapiz;
			Brush^ brocha;
			if (ubicacion == "Selva") {
				lapiz = gcnew Pen(Color::ForestGreen); //Este es el lapiz para dibujar lo brazos roboticos;
				brocha = gcnew SolidBrush(Color::ForestGreen);
			}
			else if (ubicacion == "Costa") {
				lapiz = gcnew Pen(Color::LightYellow); //Este es el lapiz para dibujar lo brazos roboticos;
				brocha = gcnew SolidBrush(Color::LightYellow);
			}
			else
			{
				lapiz = gcnew Pen(Color::Aquamarine); //Este es el lapiz para dibujar lo brazos roboticos;
				brocha = gcnew SolidBrush(Color::Aquamarine);
			}
			//126 ancho, 100 de largo y 14 de espacio
			y = (i / 3) * 200 + 30 * ((i / 3) + 1);
			graphics->FillRectangle(brocha, x, y, 150, 200);
			/* Esto es para dibujar un rectangulo sin relleno
			graphics->DrawRectangle(lapiz, x, y, 80, 100);
			*/
			x = x + 170; //150 de ancho + 20 de espacio
			if ((i + 1) % 3 == 0) {
				x = 20;
			}
		}
	}
	private: System::Void panel1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		int indiceLista;
		int xClick = e->X, j;
		int yClick = e->Y, i;
		int xi = 20, xf = xi + 150;
		int yi = 30, yf = yi + 200;
		for (j = 0; j < 3; j++) {
			if (xClick >= xi && xClick <= xf) {
				break;
			}
			xi = xf + 20;
			xf = xi + 150;
		}
		if (j == 3) {
			j = -1;
		}
		for (i = 0; i < 3; i++) {
			if (yClick >= yi && yClick <= yf) {
				break;
			}
			yi = yf + 30;
			yf = yi + 200;
		}
		if (i == 3) {
			i = -1;
		}
		if (i >= 0 && j >= 0) {
			indiceLista = i * 3 + j;
			if (indiceLista < this->listaInvernadero->Count) {
				//Aqui he seleccionado un elemento correcto del brazo Robotico
				Invernadero^ invernadero = this->listaInvernadero[indiceLista];
				this->textBox1->Text = invernadero->getNombre();
				this->textBox2->Text = invernadero->getUbicacion();
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombreDetalle = this->textBox1->Text;
		InvernaderoCController^ invernaderoController = gcnew InvernaderoCController();
		Invernadero^ invernadero = invernaderoController->buscarInvernaderoxNombre(nombreDetalle);
		frmInfoDetalleInvernadero^ ventanaDetalleInvernadero = gcnew frmInfoDetalleInvernadero(invernadero);
		ventanaDetalleInvernadero->ShowDialog();
		List<Invernadero^>^ listaInvernaderos = invernaderoController->buscarTodos();
	}
	};
}
