#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre, apellidoPaterno, apellidoMaterno;
    int edad;

    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    cout << "Ingrese su apellido paterno: ";
    getline(cin, apellidoPaterno);

    cout << "Ingrese su apellido materno: ";
    getline(cin, apellidoMaterno);

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "\nNombre completo: " << nombre << " " << apellidoPaterno << " " << apellidoMaterno << endl;
    cout << "Edad: " << edad << " años" << endl;

    return 0;
}

