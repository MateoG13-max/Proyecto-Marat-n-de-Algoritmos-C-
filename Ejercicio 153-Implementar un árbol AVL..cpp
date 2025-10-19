// Ejercicio 953 - Implementar recorridos en árbol binario (preorden, inorden, postorden)
#include <bits/stdc++.h>
using namespace std;
struct Node{int key; Node*L;Node*R; Node(int k):key(k),L(nullptr),R(nullptr){}};
Node* insert(Node* r,int k){ if(!r) return new Node(k); if(k<r->key) r->L=insert(r->L,k); else r->R=insert(r->R,k); return r; }
void pre(Node* r){ if(!r) return; cout<<r->key<<" "; pre(r->L); pre(r->R); }
void in(Node* r){ if(!r) return; in(r->L); cout<<r->key<<" "; in(r->R); }
void post(Node* r){ if(!r) return; post(r->L); post(r->R); cout<<r->key<<" "; }
int main(){
    Node* root=nullptr; int x;
    while(cin>>x){ if(x==0) break; root=insert(root,x); }
    pre(root); cout<<"\n"; in(root); cout<<"\n"; post(root); cout<<"\n";
    return 0;
}
