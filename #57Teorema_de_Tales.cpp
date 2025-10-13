#include <iostream>
using namespace std;

int main() {
    double *a = new double, *b = new double, *c = new double, *d = new double;
    cout << "Ingrese los valores de a, b, c: ";
    cin >> *a >> *b >> *c;

    // Calcular d según Teorema de Tales (a/b = c/d → d = (b*c)/a)
    *d = (*b * *c) / *a;

    cout << "Resultado: d = " << *d << endl;

    delete a; delete b; delete c; delete d;
}
