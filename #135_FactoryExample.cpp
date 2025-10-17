// Ejercicio 135 - Factory simple produce objetos por clave
#include <iostream>
#include <memory>
using namespace std;

class Product { public: virtual void info()=0; virtual ~Product(){} };
class ProdA: public Product{ public: void info() override{ cout<<"Producto A\n"; } };
class ProdB: public Product{ public: void info() override{ cout<<"Producto B\n"; } };

unique_ptr<Product> create(const string& key){
    if(key=="A") return make_unique<ProdA>();
    if(key=="B") return make_unique<ProdB>();
    return nullptr;
}

int main(){
    string k; cout<<"Crear producto (A/B): "; cin>>k;
    auto p = create(k);
    if(p) p->info(); else cout<<"Clave desconocida\n";
    return 0;
}
