// Ejercicio 126 - Implementación de pila dinámica (LIFO) usando array dinámico
#include <iostream>
using namespace std;

class Stack {
    int *data;
    int capacity;
    int sz;
    void grow(){
        int nc = capacity==0?4:capacity*2;
        int *nd = new int[nc];
        for(int i=0;i<sz;i++) nd[i]=data[i];
        delete[] data; data = nd; capacity = nc;
    }
public:
    Stack(): data(nullptr), capacity(0), sz(0) {}
    ~Stack(){ delete[] data; }
    void push(int v){ if(sz==capacity) grow(); data[sz++] = v; }
    int pop(){ if(sz==0) throw runtime_error("empty"); return data[--sz]; }
    int size() const { return sz; }
};

int main(){
    Stack st;
    cout<<"Pila dinámica - ingresa números, 0 para terminar y desapilar último\n";
    while(true){
        int x; cin>>x;
        if(x==0){
            if(st.size()==0){ cout<<"Pila vacía, fin\n"; break; }
            cout<<"Pop -> "<<st.pop()<<"\n";
        } else st.push(x);
    }
    return 0;
}
