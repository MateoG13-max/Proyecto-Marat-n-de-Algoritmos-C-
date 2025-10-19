// Ejercicio 955 - Implementar un árbol Red-Black (simplificado para insertar enteros)
#include <bits/stdc++.h>
using namespace std;
enum Color { RED, BLACK };
struct Node {
    int key; Color color; Node *left,*right,*parent;
    Node(int k):key(k),color(RED),left(nullptr),right(nullptr),parent(nullptr){}
};
class RBTree {
    Node* root;
    void rotateLeft(Node* x){
        Node* y = x->right; x->right = y->left;
        if(y->left) y->left->parent = x;
        y->parent = x->parent;
        if(!x->parent) root = y;
        else if(x==x->parent->left) x->parent->left = y;
        else x->parent->right = y;
        y->left = x; x->parent = y;
    }
    void rotateRight(Node* x){
        Node* y = x->left; x->left = y->right;
        if(y->right) y->right->parent = x;
        y->parent = x->parent;
        if(!x->parent) root = y;
        else if(x==x->parent->right) x->parent->right = y;
        else x->parent->left = y;
        y->right = x; x->parent = y;
    }
    void fixInsert(Node* k){
        while(k->parent && k->parent->color==RED){
            Node* gp = k->parent->parent;
            if(k->parent == gp->left){
                Node* u = gp->right;
                if(u && u->color==RED){ gp->color=RED; k->parent->color=BLACK; u->color=BLACK; k=gp; }
                else{
                    if(k==k->parent->right){ k=k->parent; rotateLeft(k); }
                    k->parent->color=BLACK; gp->color=RED; rotateRight(gp);
                }
            } else {
                Node* u = gp->left;
                if(u && u->color==RED){ gp->color=RED; k->parent->color=BLACK; u->color=BLACK; k=gp; }
                else{
                    if(k==k->parent->left){ k=k->parent; rotateRight(k); }
                    k->parent->color=BLACK; gp->color=RED; rotateLeft(gp);
                }
            }
        }
        root->color = BLACK;
    }
public:
    RBTree():root(nullptr){}
    void insert(int key){
        Node* node = new Node(key);
        Node* y = nullptr; Node* x = root;
        while(x){ y = x; if(node->key < x->key) x = x->left; else x = x->right; }
        node->parent = y;
        if(!y) root = node;
        else if(node->key < y->key) y->left = node; else y->right = node;
        if(!node->parent){ node->color=BLACK; return; }
        if(!node->parent->parent) return;
        fixInsert(node);
    }
    void inorder(Node* r){ if(!r) return; inorder(r->left); cout<<r->key<<" "; inorder(r->right);}
    void print(){ inorder(root); cout<<"\n"; }
};
int main(){
    RBTree t; int x;
    while(cin>>x){ if(x==0)break; t.insert(x); }
    t.print();
    return 0;
}