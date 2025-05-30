#include "ClienteController.h"
using namespace InvernaderoController;
using namespace System::IO;

ClienteController::ClienteController() {
}

List<Cliente^>^ ClienteController::buscarTodos() {
    List<Cliente^>^ listaClientes = gcnew List<Cliente^>();
    array<String^>^ lineas = File::ReadAllLines("Clientes.txt");
    String^ separadores = ";";
    for each (String ^ linea in lineas) {
        array<String^>^ campos = linea->Split(separadores->ToCharArray());
        int codigoFile = Convert::ToInt32(campos[0]);
        String^ nombreFile = campos[1];
        String^ dniFile = campos[2];
        String^ telefonoFile = campos[3];
        String^ emailFile = campos[4];
        String^ direccionFile = campos[5];

        Cliente^ cliente = gcnew Cliente(codigoFile, nombreFile, dniFile, telefonoFile, emailFile, direccionFile, nullptr);
        listaClientes->Add(cliente);
    }
    return listaClientes;
}

List<Cliente^>^ ClienteController::buscarClientexNombrexDni(String^ nombre, String^ dni) {
    List<Cliente^>^ listaClientes = gcnew List<Cliente^>();
    array<String^>^ lineas = File::ReadAllLines("Clientes.txt");
    String^ separadores = ";";
    for each (String ^ linea in lineas) {
        array<String^>^ campos = linea->Split(separadores->ToCharArray());
        int codigoFile = Convert::ToInt32(campos[0]);
        String^ nombreFile = campos[1];
        String^ dniFile = campos[2];
        String^ telefonoFile = campos[3];
        String^ emailFile = campos[4];
        String^ direccionFile = campos[5];
        if (nombreFile->Contains(nombre) && dniFile->Contains(dni)) {
            Cliente^ cliente = gcnew Cliente(codigoFile, nombreFile, dniFile, telefonoFile, emailFile, direccionFile, nullptr);
            listaClientes->Add(cliente);
        }
    }
    return listaClientes;
}

Cliente^ ClienteController::buscarClientexCodigo(int codigo) {
    List<Cliente^>^ listaClientes = buscarTodos();
    for (int i = 0; i < listaClientes->Count; i++) {
        Cliente^ cliente = listaClientes[i];
        if (cliente->getCodigo() == codigo) {
            return cliente;
        }
    }
    return nullptr;
}

void ClienteController::agregarCliente(int codigo, String^ nombre, String^ dni, String^ telefono, String^ email, String^ direccion, Distrito^ distrito) {
    List<Cliente^>^ listaClientes = buscarTodos();
    Cliente^ clienteNuevo = gcnew Cliente(codigo, nombre, dni, telefono, email, direccion, distrito);
    listaClientes->Add(clienteNuevo);
    escribirArchivo(listaClientes);
}

void ClienteController::escribirArchivo(List<Cliente^>^ listaClientes) {
    array<String^>^ lineasArchivo = gcnew array<String^>(listaClientes->Count);
    for (int i = 0; i < listaClientes->Count; i++) {
        Cliente^ cliente = listaClientes[i];
        lineasArchivo[i] = cliente->getCodigo() + ";" + cliente->getNombre() + ";" + cliente->getDni() + ";" + cliente->getTelefono() + ";" + cliente->getEmail() + ";" + cliente->getDireccion();
    }
    File::WriteAllLines("Clientes.txt", lineasArchivo);
}

void ClienteController::eliminarCliente(int codigoEliminar) {
    List<Cliente^>^ listaClientes = buscarTodos();
    for (int i = 0; i < listaClientes->Count; i++) {
        Cliente^ cliente = listaClientes[i];
        if (cliente->getCodigo() == codigoEliminar) {
            listaClientes->RemoveAt(i);
            break;
        }
    }
    escribirArchivo(listaClientes);
}

void ClienteController::actualizarCliente(int codigo, String^ nombre, String^ dni, String^ telefono, String^ email, String^ direccion, Distrito^ distrito) {
    List<Cliente^>^ listaClientes = buscarTodos();
    for (int i = 0; i < listaClientes->Count; i++) {
        Cliente^ cliente = listaClientes[i];
        if (cliente->getCodigo() == codigo) {
            cliente->setNombre(nombre);
            cliente->setDni(dni);
            cliente->setTelefono(telefono);
            cliente->setEmail(email);
            cliente->setDireccion(direccion);
            cliente->setDistrito(distrito);
            listaClientes[i] = cliente;
            break;
        }
    }
    escribirArchivo(listaClientes);
}