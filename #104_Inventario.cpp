#include <iostream>
#include <vector>
using namespace std;

class Producto {
public:
    string nombre;
    int cantidad;
    double precio;
    Producto(string n, int c, double p): nombre(n), cantidad(c), precio(p) {}
    void mostrar() const { cout<<nombre<<" x"<<cantidad<<" $"<<precio<<"\\n"; }
};

class Inventario {
    vector<Producto> items;
public:
    void agregar(const Producto& p){ items.push_back(p); }
    void listar(){ for (auto &p: items) p.mostrar(); }
    bool vender(const string& nombre, int q){
        for (auto &p: items) if(p.nombre==nombre && p.cantidad>=q){ p.cantidad-=q; return true; }
        return false;
    }
};

int main(){
    Inventario inv;
    int n; cout<<"¿Cuántos productos agregar?: "; cin>>n;
    for(int i=0;i<n;i++){
        string nom; int cant; double pr;
        cout<<"Nombre: "; cin>>nom;
        cout<<"Cantidad: "; cin>>cant;
        cout<<"Precio: "; cin>>pr;
        inv.agregar(Producto(nom,cant,pr));
    }
    cout<<"\\nInventario:\\n"; inv.listar();
    string venta; int q; cout<<"\\nVender producto (nombre cantidad): "; cin>>venta>>q;
    if(inv.vender(venta,q)) cout<<"Venta realizada\\n"; else cout<<"No disponible o cantidad insuficiente\\n";
    cout<<"\\nInventario actualizado:\\n"; inv.listar();
    return 0;
}