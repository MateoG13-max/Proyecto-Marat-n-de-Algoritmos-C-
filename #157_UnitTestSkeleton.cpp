// Ejercicio 157 - Esqueleto de runner de tests simples (sin framework)
#include <iostream>
#include <vector>
#include <functional>
using namespace std;

int suma(int a,int b){ return a+b; }

int main(){
    vector<pair<string, function<bool()>>> tests;
    tests.push_back({"suma positiva", [](){ return suma(2,3)==5; }});
    tests.push_back({"suma cero", [](){ return suma(0,0)==0; }});
    int passed=0;
    for(auto &t: tests){ cout<<t.first<<": "; if(t.second()){ cout<<"OK\n"; passed++; } else cout<<"FAIL\n"; }
    cout<<passed<<"/"<<tests.size()<<" tests pasados\n";
    return 0;
}
