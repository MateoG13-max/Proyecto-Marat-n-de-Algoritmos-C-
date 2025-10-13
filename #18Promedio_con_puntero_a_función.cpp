#include <iostream>
using namespace std;

/* Dos funciones de cálculo de promedio */
double promedioArit(double a, double b, double c) {
    return (a + b + c) / 3.0;
}
double promedioPond(double a, double b, double c) {
    // pesos 50%, 30%, 20%
    return (0.5*a + 0.3*b + 0.2*c);
}

int main() {
    double a,b,c;
    cout << "Ingresa tres valores: ";
    cin >> a >> b >> c;

    cout << "Elige: 1=Aritmético  2=Ponderado: ";
    int op; cin >> op;

    double (*calcula)(double,double,double) = nullptr;
    if (op == 1) calcula = promedioArit;
    else calcula = promedioPond;

    double res = calcula(a,b,c); // llamada vía puntero a función
    cout << "Resultado = " << res << "\n";
    return 0;
}

