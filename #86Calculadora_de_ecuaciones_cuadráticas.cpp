#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double *a = new double, *b = new double, *c = new double;
    cout << "Ecuación cuadrática: ax² + bx + c = 0\n";
    cout << "a: "; cin >> *a;
    cout << "b: "; cin >> *b;
    cout << "c: "; cin >> *c;

    double discriminante = pow(*b, 2) - 4 * (*a) * (*c);

    if (discriminante < 0) cout << "No hay raíces reales.\n";
    else {
        double r1 = (-(*b) + sqrt(discriminante)) / (2 * (*a));
        double r2 = (-(*b) - sqrt(discriminante)) / (2 * (*a));
        cout << "Raíces: " << r1 << " y " << r2 << endl;
    }

    delete a; delete b; delete c;
}




