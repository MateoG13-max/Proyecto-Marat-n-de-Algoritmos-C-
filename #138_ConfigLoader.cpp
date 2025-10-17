// Ejercicio 138 - Cargar archivo de configuración simple (clave=valor)
#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main(){
    string file; cout<<"Archivo de configuración (leer): "; cin>>file;
    ifstream in(file); if(!in){ cout<<"No se pudo abrir\n"; return 1; }
    map<string,string> cfg; string line;
    while(getline(in,line)){
        auto pos=line.find('='); if(pos==string::npos) continue;
        cfg[line.substr(0,pos)] = line.substr(pos+1);
    }
    cout<<"Claves leídas: "<<cfg.size()<<"\n";
    for(auto &p: cfg) cout<<p.first<<" = "<<p.second<<"\n";
    return 0;
}
