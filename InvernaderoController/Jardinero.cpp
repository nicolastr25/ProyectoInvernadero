#include "Jardinero.h"

using namespace InvernaderoModel;

Jardinero::Jardinero() {
    herramientas = gcnew List<Herramienta^>();
    tareas = gcnew List<Tarea^>();
}

void Jardinero::consultarZona(Zona^ zona) {
    // Lógica para consultar zona
}

void Jardinero::realizarTarea(Tarea^ tarea) {
    // Lógica para realizar tarea
}

void Jardinero::agregarHerramienta(Herramienta^ herramienta) {
    herramientas->Add(herramienta);
}

List<Herramienta^>^ Jardinero::getHerramientas() {
    return herramientas;
}

void Jardinero::setHerramientas(List<Herramienta^>^ herramientas) {
    this->herramientas = herramientas;
}

List<Tarea^>^ Jardinero::getTareas() {
    return tareas;
}

void Jardinero::setTareas(List<Tarea^>^ tareas) {
    this->tareas = tareas;
}