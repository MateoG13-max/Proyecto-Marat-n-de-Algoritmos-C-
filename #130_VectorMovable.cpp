// Ejercicio 130 - Vector dinámico simple con soporte a move semantics (conceptual)
#include <iostream>
#include <utility>
using namespace std;

class SimpleVector {
    int *data; size_t sz; size_t cap;
public:
    SimpleVector(): data(nullptr), sz(0), cap(0) {}
    ~SimpleVector(){ delete[] data; }
    void push(int v){
        if(sz==cap){
            size_t nc = cap?cap*2:4;
            int* nd = new int[nc];
            for(size_t i=0;i<sz;i++) nd[i]=data[i];
            delete[] data; data=nd; cap=nc;
        }
        data[sz++]=v;
    }
    size_t size() const { return sz; }
    int& operator[](size_t i){ return data[i]; }
    // Move constructor
    SimpleVector(SimpleVector&& other) noexcept: data(other.data), sz(other.sz), cap(other.cap){ other.data=nullptr; other.sz=0; other.cap=0; }
    // Move assignment
    SimpleVector& operator=(SimpleVector&& other) noexcept {
        if(this!=&other){ delete[] data; data=other.data; sz=other.sz; cap=other.cap; other.data=nullptr; other.sz=0; other.cap=0; }
        return *this;
    }
    // disable copy (for simplicity)
    SimpleVector(const SimpleVector&) = delete;
    SimpleVector& operator=(const SimpleVector&) = delete;
};

int main(){
    SimpleVector v;
    cout<<"Agregar 6 números:\n";
    for(int i=0;i<6;i++){ int x; cin>>x; v.push(x); }
    cout<<"Contenido: "; for(size_t i=0;i<v.size();i++) cout<<v[i]<<" "; cout<<"\n";
    SimpleVector v2 = std::move(v);
    cout<<"Movido a v2, v2 size="<<v2.size()<<"\n";
    return 0;
}
