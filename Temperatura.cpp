#include <iostream>
using namespace std;

double CtoF(double c){ return (c * 9/5) + 32; }
double FtoC(double f){ return (f - 32) * 5/9; }
double CtoK(double c){ return c + 273.15; }

int main() {
    double valor; int op;
    cout << "Valor: "; cin >> valor;
    cout << "1=C->F  2=F->C  3=C->K: "; cin >> op;

    double (*convert)(double);
    switch(op){
        case 1: convert = CtoF; break;
        case 2: convert = FtoC; break;
        default: convert = CtoK; break;
    }

    cout << "Resultado: " << convert(valor) << "\n";
    return 0;
}

