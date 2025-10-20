#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit, kelvin;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    fahrenheit = celsius * 9.0 / 5 + 32;
    kelvin = celsius + 273.15;

    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Kelvin: " << kelvin << endl;

    return 0;
}
