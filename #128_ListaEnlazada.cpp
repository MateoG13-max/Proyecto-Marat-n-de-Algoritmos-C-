// Ejercicio 128 - Lista enlazada simple (insertar al final, eliminar por valor)
#include <iostream>
using namespace std;

struct Node { int val; Node* next; Node(int v): val(v), next(nullptr) {} };

class SinglyList {
    Node* head;
public:
    SinglyList(): head(nullptr) {}
    ~SinglyList(){ while(head){ Node* t=head; head=head->next; delete t; } }
    void push_back(int v){
        Node* n = new Node(v);
        if(!head){ head=n; return; }
        Node* cur=head; while(cur->next) cur=cur->next; cur->next=n;
    }
    bool remove(int v){
        Node **cur = &head;
        while(*cur){
            if((*cur)->val==v){ Node* t=*cur; *cur = (*cur)->next; delete t; return true; }
            cur = &((*cur)->next);
        }
        return false;
    }
    void print(){ for(Node* p=head;p;p=p->next) cout<<p->val<<" "; cout<<"\n"; }
};

int main(){
    SinglyList list;
    cout<<"Ingresa números para agregar (negativo para terminar):\n";
    while(true){ int x; cin>>x; if(x<0) break; list.push_back(x); }
    cout<<"Lista: "; list.print();
    cout<<"Valor a eliminar: "; int v; cin>>v;
    if(list.remove(v)) cout<<"Eliminado\n"; else cout<<"No encontrado\n";
    cout<<"Lista ahora: "; list.print();
    return 0;
}
