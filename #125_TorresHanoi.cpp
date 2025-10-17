// Ejercicio 125 - Torres de Hanoi (mostrar movimientos recursivos)
// Este ejercicio es conceptual: para tamaños grandes la lista de movimientos crece exponencialmente.
#include <iostream>
using namespace std;

void hanoi(int n, char from, char to, char aux){
    if(n==0) return;
    hanoi(n-1, from, aux, to);
    cout<<"Mover disco "<<n<<" de "<<from<<" a "<<to<<"\n";
    hanoi(n-1, aux, to, from);
}

int main(){
    int n; cout<<"Torres de Hanoi - ingresa número de discos (<=10 recomendado): "; cin>>n;
    hanoi(n,'A','C','B');
    return 0;
}
