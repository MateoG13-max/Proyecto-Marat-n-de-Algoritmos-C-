// Ejercicio 158 - Analizador simple de dependencias: leer pares "A->B" y mostrar grafo
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    cout<<"Ingresa dependencias tipo A->B (escribe end para terminar):\n";
    string line;
    map<string, vector<string>> adj;
    while(true){
        cin>>line; if(line=="end") break;
        auto pos=line.find("->"); if(pos!=string::npos) adj[line.substr(0,pos)].push_back(line.substr(pos+2));
    }
    for(auto &p: adj){ cout<<p.first<<": "; for(auto &v: p.second) cout<<v<<" "; cout<<"\n"; }
    return 0;
}
