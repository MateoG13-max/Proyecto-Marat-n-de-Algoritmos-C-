// Ejercicio 961 - Implementar un árbol B (orden t) - inserción básica (sin eliminación)
#include <bits/stdc++.h>
using namespace std;
struct BNode {
    bool leaf;
    vector<int> keys;
    vector<BNode*> child;
    BNode(bool leaf_, int t):leaf(leaf_){}
};
struct BTree {
    BNode* root;
    int t;
    BTree(int t_):root(nullptr),t(t_){}
    BNode* createNode(bool leaf){ BNode* n = new BNode(leaf,t); n->keys.reserve(2*t-1); n->child.reserve(2*t); return n; }
    void splitChild(BNode* x, int i){
        BNode* y = x->child[i];
        BNode* z = createNode(y->leaf);
        for(int j=0;j<t-1;j++) z->keys.push_back(y->keys[j+t]);
        if(!y->leaf){
            for(int j=0;j<t;j++) z->child.push_back(y->child[j+t]);
        }
        y->keys.resize(t-1);
        if(!y->leaf) y->child.resize(t);
        x->child.insert(x->child.begin()+i+1, z);
        x->keys.insert(x->keys.begin()+i, y->keys[t-1]);
    }
    void insertNonFull(BNode* x, int k){
        int i = x->keys.size()-1;
        if(x->leaf){
            x->keys.push_back(0);
            while(i>=0 && k<x->keys[i]){ x->keys[i+1]=x->keys[i]; i--; }
            x->keys[i+1]=k;
        } else {
            while(i>=0 && k<x->keys[i]) i--;
            i++;
            if((int)x->child[i]->keys.size()==2*t-1){
                splitChild(x,i);
                if(k > x->keys[i]) i++;
            }
            insertNonFull(x->child[i],k);
        }
    }
    void insert(int k){
        if(!root){
            root = createNode(true);
            root->keys.push_back(k);
            return;
        }
        if((int)root->keys.size()==2*t-1){
            BNode* s = createNode(false);
            s->child.push_back(root);
            splitChild(s,0);
            int i = 0;
            if(k > s->keys[0]) i++;
            insertNonFull(s->child[i], k);
            root = s;
        } else insertNonFull(root,k);
    }
    void traverse(BNode* x){
        if(!x) return;
        int i;
        for(i=0;i<(int)x->keys.size();i++){
            if(!x->leaf) traverse(x->child[i]);
            cout<<x->keys[i]<<" ";
        }
        if(!x->leaf) traverse(x->child[i]);
    }
    void print(){ traverse(root); cout<<"\n"; }
};
int main(){
    BTree T(2);
    int x;
    while(cin>>x){ if(x==0) break; T.insert(x); }
    T.print();
    return 0;
}