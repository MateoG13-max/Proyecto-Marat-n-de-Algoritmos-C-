// Ejercicio 140 - Base de datos en memoria con búsqueda por campo
#include <iostream>
#include <vector>
using namespace std;

struct Record { string id; string name; int age; };
int main(){
    vector<Record> db;
    int n; cout<<"Cuántos registros?: "; cin>>n;
    for(int i=0;i<n;i++){ Record r; cin>>r.id>>r.name>>r.age; db.push_back(r); }
    cout<<"Buscar por id: "; string q; cin>>q;
    for(auto &r: db) if(r.id==q) { cout<<r.id<<" "<<r.name<<" "<<r.age<<"\n"; return 0; }
    cout<<"No encontrado\n";
    return 0;
}
