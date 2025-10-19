// Ejercicio 960 - Implementar un montículo de Fibonacci (simplificado: insert, get_min, extract_min
#include <bits/stdc++.h>
using namespace std;
struct Node {
    int key; int degree; bool mark;
    Node *parent,*child,*left,*right;
    Node(int k):key(k),degree(0),mark(false),parent(nullptr),child(nullptr){ left=right=this; }
};
class FibHeap {
    Node* minNode=nullptr;
    int n=0;
    void link(Node* y, Node* x){
        y->left->right = y->right; y->right->left = y->left;
        y->parent = x;
        if(!x->child) x->child = y, y->left=y->right=y;
        else {
            y->right = x->child; y->left = x->child->left;
            x->child->left->right = y; x->child->left = y;
        }
        x->degree++; y->mark=false;
    }
    void consolidate(){
        int D = max(1, (int)(log2(max(1,n))*2));
        vector<Node*> A(D*2+10, nullptr);
        // iterate root list
        if(!minNode) return;
        vector<Node*> roots;
        Node* w = minNode;
        do { roots.push_back(w); w=w->right; } while(w!=minNode);
        for(Node* w: roots){
            Node* x = w;
            int d = x->degree;
            while(d < (int)A.size() && A[d]){
                Node* y = A[d];
                if (x->key > y->key) swap(x,y);
                link(y,x);
                A[d] = nullptr;
                d++;
            }
            if (d >= (int)A.size()) A.resize(d+10,nullptr);
            A[d]=x;
        }
        minNode=nullptr;
        for(auto node: A) if(node){
            if(!minNode) { node->left=node->right=node; minNode=node; }
            else {
                node->right = minNode; node->left = minNode->left;
                minNode->left->right = node; minNode->left = node;
                if(node->key < minNode->key) minNode = node;
            }
        }
    }
public:
    void insert(int k){
        Node* x = new Node(k);
        if(!minNode) minNode = x;
        else {
            x->right = minNode; x->left = minNode->left;
            minNode->left->right = x; minNode->left = x;
            if(x->key < minNode->key) minNode = x;
        }
        n++;
    }
    bool empty(){ return minNode==nullptr; }
    int get_min(){ return minNode?minNode->key:INT_MIN; }
    int extract_min(){
        Node* z = minNode;
        if(z){
            if(z->child){
                vector<Node*> childs;
                Node* c = z->child;
                do { childs.push_back(c); c=c->right; } while(c!=z->child);
                for(Node* x: childs){
                    x->parent = nullptr;
                    x->left = minNode->left; x->right = minNode;
                    minNode->left->right = x; minNode->left = x;
                }
            }
            z->left->right = z->right; z->right->left = z->left;
            if(z==z->right) minNode=nullptr;
            else { minNode = z->right; consolidate(); }
            n--;
            int ret = z->key; delete z; return ret;
        }
        return INT_MIN;
    }
};
int main(){
    FibHeap fh; int x;
    while(cin>>x){ if(x==0) break; fh.insert(x); }
    while(!fh.empty()){ cout<<fh.get_min()<<" "; fh.extract_min(); }
    cout<<"\n";
    return 0;
}