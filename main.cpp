#include <iostream>
using namespace std;

int main() {
    double numero1, numero2, suma, resta;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    suma = numero1 + numero2;
    resta = numero1 - numero2;

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;

    return 0;
}
