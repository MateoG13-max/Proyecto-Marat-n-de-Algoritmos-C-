// Ejercicio 954 - Implementar un árbol AVL (insert y rotaciones)
#include <bits/stdc++.h>
using namespace std;
struct Node{int key,height; Node*L;Node*R; Node(int k):key(k),height(1),L(nullptr),R(nullptr){}};
int h(Node* n){ return n? n->height : 0; }
int bf(Node* n){ return n? h(n->L)-h(n->R) : 0; }
void upd(Node* n){ if(n) n->height = 1 + max(h(n->L), h(n->R)); }
Node* rotR(Node* y){ Node* x=y->L; Node* T2=x->R; x->R=y; y->L=T2; upd(y); upd(x); return x;}
Node* rotL(Node* x){ Node* y=x->R; Node* T2=y->L; y->L=x; x->R=T2; upd(x); upd(y); return y;}
Node* insert(Node* node,int key){
    if(!node) return new Node(key);
    if(key < node->key) node->L = insert(node->L,key);
    else node->R = insert(node->R,key);
    upd(node);
    int balance = bf(node);
    if(balance > 1 && key < node->L->key) return rotR(node);
    if(balance < -1 && key > node->R->key) return rotL(node);
    if(balance > 1 && key > node->L->key){ node->L = rotL(node->L); return rotR(node); }
    if(balance < -1 && key < node->R->key){ node->R = rotR(node->R); return rotL(node); }
    return node;
}
void inorder(Node* r){ if(!r) return; inorder(r->L); cout<<r->key<<" "; inorder(r->R); }
int main(){
    Node* root=nullptr; int x;
    while(cin>>x){ if(x==0) break; root=insert(root,x); }
    inorder(root); cout<<"\n";
    return 0;
}