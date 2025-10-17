// Ejercicio 129 - Lista doblemente enlazada con iteración y eliminación
#include <iostream>
using namespace std;

struct DNode { int val; DNode* prev; DNode* next; DNode(int v): val(v), prev(nullptr), next(nullptr) {} };

class DList {
    DNode* head; DNode* tail;
public:
    DList(): head(nullptr), tail(nullptr) {}
    ~DList(){ while(head){ DNode* t=head; head=head->next; delete t; } }
    void push_back(int v){
        DNode* n=new DNode(v);
        if(!tail){ head=tail=n; return; }
        tail->next=n; n->prev=tail; tail=n;
    }
    bool remove(int v){
        for(DNode* p=head;p;p=p->next){
            if(p->val==v){
                if(p->prev) p->prev->next=p->next; else head=p->next;
                if(p->next) p->next->prev=p->prev; else tail=p->prev;
                delete p; return true;
            }
        }
        return false;
    }
    void print_forward(){ for(DNode* p=head;p;p=p->next) cout<<p->val<<" "; cout<<"\n"; }
    void print_backward(){ for(DNode* p=tail;p;p=p->prev) cout<<p->val<<" "; cout<<"\n"; }
};

int main(){
    DList dl; cout<<"Ingresa 5 enteros:\n";
    for(int i=0;i<5;i++){ int x; cin>>x; dl.push_back(x); }
    cout<<"Forward: "; dl.print_forward();
    cout<<"Backward: "; dl.print_backward();
    cout<<"Eliminar valor: "; int v; cin>>v;
    if(dl.remove(v)) cout<<"Eliminado\n"; else cout<<"No existe\n";
    cout<<"Forward now: "; dl.print_forward();
    return 0;
}
