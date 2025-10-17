// Ejercicio 123 - Potencia recursiva (fast exponentiation)
#include <iostream>
using namespace std;

long long pow_fast(long long base, long long exp) {
    if (exp == 0) return 1;
    long long half = pow_fast(base, exp/2);
    if (exp % 2 == 0) return half * half;
    return half * half * base;
}

int main(){
    long long b,e; cout<<"Base: "; cin>>b; cout<<"Exponente (>=0): "; cin>>e;
    if(e<0){ cout<<"Exponente negativo no soportado\n"; return 1; }
    cout<<b<<"^"<<e<<" = "<<pow_fast(b,e)<<"\n";
    return 0;
}
