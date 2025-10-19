// Ejercicio 952 - Implementar un árbol binario de búsqueda (insert, buscar, eliminar mínimo)
#include <bits/stdc++.h>
using namespace std;
struct Node { int key; Node* L; Node* R; Node(int k):key(k),L(nullptr),R(nullptr){} };
Node* insert(Node* root,int k){
    if(!root) return new Node(k);
    if(k<root->key) root->L=insert(root->L,k);
    else root->R=insert(root->R,k);
    return root;
}
Node* findMin(Node* root){ while(root && root->L) root=root->L; return root; }
Node* remove(Node* root,int k){
    if(!root) return nullptr;
    if(k<root->key) root->L=remove(root->L,k);
    else if(k>root->key) root->R=remove(root->R,k);
    else{
        if(!root->L){ Node* r=root->R; delete root; return r; }
        if(!root->R){ Node* l=root->L; delete root; return l; }
        Node* m=findMin(root->R); root->key=m->key; root->R=remove(root->R,m->key);
    }
    return root;
}
bool search(Node* root,int k){ if(!root) return false; if(root->key==k) return true; return k<root->key?search(root->L,k):search(root->R,k); }
void inorder(Node* r){ if(!r) return; inorder(r->L); cout<<r->key<<" "; inorder(r->R); }
int main(){
    Node* root=nullptr;
    int n; while(cin>>n) { if(n==0) break; root=insert(root,n); }
    inorder(root); cout<<"\n";
    int q; while(cin>>q){ if(q==0) break; cout<<(search(root,q)?"Encontrado":"No encontrado")<<"\n"; root=remove(root,q); inorder(root); cout<<"\n"; }
    return 0;
}