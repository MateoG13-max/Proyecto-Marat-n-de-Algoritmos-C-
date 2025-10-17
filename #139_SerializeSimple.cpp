// Ejercicio 139 - Serializar una lista de pares a archivo en formato simple
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(){
    vector<pair<string,int>> items;
    int n; cout<<"Cuántos elementos registrar? "; cin>>n;
    for(int i=0;i<n;i++){ string name; int v; cout<<"Nombre y valor: "; cin>>name>>v; items.emplace_back(name,v); }
    string file; cout<<"Archivo salida: "; cin>>file;
    ofstream out(file, ios::binary);
    for(auto &p: items){ size_t l = p.first.size(); out.write((char*)&l,sizeof(l)); out.write(p.first.data(),l); out.write((char*)&p.second,sizeof(p.second)); }
    out.close(); cout<<"Serialización completa\n";
    return 0;
}
