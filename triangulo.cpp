#include <iostream>
using namespace std;

int main()
{
    float base, altura, area;

    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese la altura: ";
    cin >> altura;

    area = (base * altura) / 2;

    cout << "El area es: " << area << endl;

    return 0;
}
