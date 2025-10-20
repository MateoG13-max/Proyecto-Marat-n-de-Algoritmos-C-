#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, s, area;

    cout << "Ingrese los tres lados del triángulo: ";
    cin >> a >> b >> c;

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "El área del triángulo es: " << area << endl;

    return 0;
}
