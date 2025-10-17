// Ejercicio 133 - Strategy usando std::function para seleccionar algoritmo en runtime
#include <iostream>
#include <functional>
using namespace std;

int strategyAdd(int a,int b){ return a+b; }
int strategyMul(int a,int b){ return a*b; }

int main(){
    function<int(int,int)> strat;
    cout<<"Elige estrategia (1:add, 2:mul): "; int op; cin>>op;
    strat = (op==1)? strategyAdd : strategyMul;
    int x,y; cout<<"a b: "; cin>>x>>y;
    cout<<"Resultado: "<<strat(x,y)<<"\n";
    return 0;
}
