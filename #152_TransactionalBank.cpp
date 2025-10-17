// Ejercicio 152 - Simular transacciones con rollback simple (transacción atómica en memoria)
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    map<string,int> accounts;
    accounts["A"]=100; accounts["B"]=50;
    cout<<"Cuentas iniciales: A=100, B=50\n";
    int amount; cout<<"Transferir cuánto de A a B? "; cin>>amount;
    // snapshot
    auto snapshot = accounts;
    if(accounts["A"]>=amount){ accounts["A"]-=amount; accounts["B"]+=amount; cout<<"Transacción OK\n"; }
    else { accounts = snapshot; cout<<"Fondos insuficientes - rollback\n"; }
    cout<<"Estado: A="<<accounts["A"]<<" B="<<accounts["B"]<<"\n";
    return 0;
}
