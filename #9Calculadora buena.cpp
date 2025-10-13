#include <iostream>
using namespace std;

double suma(double a, double b){ return a + b; }
double resta(double a, double b){ return a - b; }
double mult(double a, double b){ return a * b; }
double divi(double a, double b){ return b != 0 ? a / b : 0; }

int main() {
    double a, b; int op;
    cout << "Ingresa dos números: "; cin >> a >> b;
    cout << "1=Suma 2=Resta 3=Multiplicación 4=División: ";
    cin >> op;

    double (*func)(double, double) = nullptr;
    switch (op) {
        case 1: func = suma; break;
        case 2: func = resta; break;
        case 3: func = mult; break;
        case 4: func = divi; break;
    }

    cout << "Resultado: " << func(a, b) << "\n";
    return 0;
}
