#include <iostream>
using namespace std;

double promedio(double a, double b, double c) { return (a+b+c)/3; }

int main() {
    double (*ptrProm)(double,double,double) = promedio;
    double x, y, z;
    cout << "Ingresa tres notas: ";
    cin >> x >> y >> z;
    cout << "Promedio = " << ptrProm(x,y,z) << endl;
}
