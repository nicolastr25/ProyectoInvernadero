#include "MaquinaTermica.h"

using namespace InvernaderoModel;

MaquinaTermica::MaquinaTermica() {

}

MaquinaTermica::MaquinaTermica(int id, String^ estado, String^ tipo, String^ Fabricante) {
    this->id = id;
    this->estado = estado;
    this->tipo = tipo;
    this->fabricante = Fabricante;
}

/*void MaquinaTermica::encender() {
    this->estado = true;
} */

/*void MaquinaTermica::apagar() {
    this->estado = false;
}*/

String^ MaquinaTermica::getTipo() {
    return this->tipo; // Puedes personalizar esto si hay herencia
}

int MaquinaTermica::getId() {
    return this->id;
}

void MaquinaTermica::setId(int id) {
    this->id = id;
}

String^ MaquinaTermica::getEstado() {
    return this->estado;
}

void MaquinaTermica::setEstado(String^ estado) {
    this->estado = estado;
}

void MaquinaTermica::setTipo(String^ tipo) {
    this->tipo = tipo;
}
String^ MaquinaTermica::getFabricante() {
    return this->fabricante;
}
void MaquinaTermica::setFabricante(String^ fabricante) {
    this->fabricante = fabricante;
}