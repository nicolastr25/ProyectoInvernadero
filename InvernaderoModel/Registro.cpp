#include "Registro.h"

using namespace InvernaderoModel;

Registro::Registro() {
    this->acciones = gcnew List<String^>();
}

void Registro::agregarAccion(String^ descripcion) {
    this->acciones->Add(descripcion);
}

void Registro::mostrarHistorial() {
    for each (String ^ accion in this->acciones) {
        Console::WriteLine(accion);
    }
}

List<String^>^ Registro::getAcciones() {
    return this->acciones;
}
