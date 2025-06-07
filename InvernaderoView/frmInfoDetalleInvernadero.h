#pragma once

namespace InvernaderoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace InvernaderoModel;
	using namespace InvernaderoController;

	/// <summary>
	/// Resumen de frmInfoDetalleInvernadero
	/// </summary>
	public ref class frmInfoDetalleInvernadero : public System::Windows::Forms::Form
	{
	public:
		frmInfoDetalleInvernadero(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmInfoDetalleInvernadero(Invernadero^ invernadero)
		{
			InitializeComponent();
			this->invernadero = invernadero;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmInfoDetalleInvernadero()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
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
	private: System::Windows::Forms::Panel^ panel1;
	private: Invernadero^ invernadero;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(803, 422);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(77, 19);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Ver Detalles";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(678, 422);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 19);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Nuevo";
			this->button4->UseVisualStyleBackColor = true;
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
			this->groupBox2->Location = System::Drawing::Point(606, 136);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(335, 246);
			this->groupBox2->TabIndex = 25;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Detalles de Invernadero";
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
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(60, 33);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(520, 500);
			this->panel1->TabIndex = 24;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmInfoDetalleInvernadero::panel1_Paint);
			// 
			// frmInfoDetalleInvernadero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1001, 577);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->panel1);
			this->Name = L"frmInfoDetalleInvernadero";
			this->Text = L"frmInfoDetalleInvernadero";
			this->Load += gcnew System::EventHandler(this, &frmInfoDetalleInvernadero::frmInfoDetalleInvernadero_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmInfoDetalleInvernadero_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = this->invernadero->getNombre();
		this->textBox2->Text = this->invernadero->getUbicacion();
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ graphics = e->Graphics;
		Pen^ lapiz;
		Brush^ brocha;
		String^ ubicacion = this->textBox2->Text;
		if (ubicacion == "Costa") {
			brocha = gcnew SolidBrush(Color::LightYellow);
		}
		else if (ubicacion == "Sierra") {
			brocha = gcnew SolidBrush(Color::Aquamarine);
		}
		else {
			brocha = gcnew SolidBrush(Color::ForestGreen);
		}
		graphics->FillRectangle(brocha, 0, 0, 520, 500);



	}
	};
}
