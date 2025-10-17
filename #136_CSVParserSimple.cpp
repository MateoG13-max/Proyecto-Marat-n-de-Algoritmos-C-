// Ejercicio 136 - Parser simple de CSV (sin comillas complejas)
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    cout<<"Ingresa una línea CSV (coma separador):\n";
    string line; cin.ignore(); getline(cin,line);
    stringstream ss(line);
    string token; vector<string> cols;
    while(getline(ss, token, ',')) cols.push_back(token);
    cout<<"Columnas encontradas: "<<cols.size()<<"\n";
    for(size_t i=0;i<cols.size();i++) cout<<i<<": '"<<cols[i]<<"'\n";
    return 0;
}
