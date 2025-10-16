#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Tarea {
public:
    string descripcion;
    int prioridad; // mayor = más urgente
    Tarea(string d,int p): descripcion(d), prioridad(p) {}
    bool operator<(const Tarea& o) const { return prioridad > o.prioridad; } // para sort descending
};

int main(){
    int n; cout<<"¿Cuántas tareas?: "; cin>>n;
    vector<Tarea> tareas;
    for(int i=0;i<n;i++){ string d; int p; cout<<"Descripción: "; cin>>ws; getline(cin,d); cout<<"Prioridad: "; cin>>p; tareas.emplace_back(d,p); }
    sort(tareas.begin(), tareas.end());
    cout<<"\\nAgenda ordenada:\\n"; for(auto &t: tareas) cout<<t.prioridad<<" - "<<t.descripcion<<"\\n";
    return 0;
}