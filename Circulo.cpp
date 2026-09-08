#include <iostream>
using namespace std;

int main () {
    double radio, area;
    const double PI = 3.141592653589793;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    area = PI * radio * radio;

    cout << "El area del ciruclo es: " << area << endl;

    return 0;

}
