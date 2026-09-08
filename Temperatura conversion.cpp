#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 1.8)+ 32;

    cout << "La temperatura en Fahrenheit es: " << fahrenheit << " °F" << endl;

    return 0;
}
