#include <iostream>
#include <vector>
using namespace std;

class Producto {
public:
    string nombre;
    double precio;
    Producto(string n,double p): nombre(n), precio(p) {}
    virtual void mostrar(){ cout<<nombre<<" $"<<precio<<"\\n"; }
    virtual ~Producto() {}
};

class Perecedero : public Producto {
    string fechaCaducidad;
public:
    Perecedero(string n,double p,string f): Producto(n,p), fechaCaducidad(f) {}
    void mostrar() override { cout<<nombre<<" $"<<precio<<" (caduca: "<<fechaCaducidad<<")\\n"; }
};

int main(){
    vector<Producto*> store;
    store.push_back(new Producto("Jugo",2.5));
    store.push_back(new Perecedero("Leche",1.2,"2025-10-01"));
    for(auto p: store) p->mostrar();
    for(auto p: store) delete p;
    return 0;
}