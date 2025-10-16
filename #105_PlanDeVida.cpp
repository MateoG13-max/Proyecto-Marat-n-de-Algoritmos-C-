#include <iostream>
#include <vector>
using namespace std;

class Meta {
public:
    string descripcion;
    bool completada;
    Meta(string d): descripcion(d), completada(false) {}
};

class PlanDeVida {
    vector<Meta*> metas; // demostración de objetos dinámicos
public:
    ~PlanDeVida(){ for(auto m: metas) delete m; }
    void agregar(string d){ metas.push_back(new Meta(d)); }
    void completar(int idx){
        if(idx<0 || idx>= (int)metas.size()){ cout<<"Índice inválido\\n"; return; }
        metas[idx]->completada = true;
    }
    void mostrar(){
        for (int i=0;i< (int)metas.size();i++)
            cout<<i<<". "<<metas[i]->descripcion<<" ["<<(metas[i]->completada?"✓":" " )<<"]\\n";
    }
};

int main(){
    PlanDeVida plan;
    int n; cout<<"¿Cuántas metas quieres añadir?: "; cin>>n; cin.ignore();
    for(int i=0;i<n;i++){ string d; cout<<"Meta "<<i<<": "; getline(cin,d); plan.agregar(d); }
    cout<<"\\nTus metas:\\n"; plan.mostrar();
    int idx; cout<<"Marca una meta completada (índice): "; cin>>idx;
    plan.completar(idx);
    cout<<"\\nEstado actualizado:\\n"; plan.mostrar();
    return 0;
}