// Ejercicio 950 - Usar std::map para implementar un diccionario (consultas)
#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,string> dict;
    dict["hola"]="hello";
    dict["mundo"]="world";
    string q; while(cin>>q){
        if(dict.count(q)) cout<<q<<" -> "<<dict[q]<<"\n";
        else cout<<q<<" -> <no encontrado>\n";
    }
    return 0;
}
