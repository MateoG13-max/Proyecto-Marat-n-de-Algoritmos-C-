// Ejercicio 959 - Implementar un heap d-ario (generalizado)
#include <bits/stdc++.h>
using namespace std;
struct DHeap {
    int d;
    vector<int> a;
    DHeap(int d_=3):d(d_){}
    int parent(int i){ return (i-1)/d; }
    int kthchild(int i,int k){ return d*i + k; }
    void push(int x){
        a.push_back(x);
        int i=a.size()-1;
        while(i>0 && a[parent(i)]<a[i]){ swap(a[parent(i)], a[i]); i=parent(i); }
    }
    int top(){ return a.empty()?INT_MIN:a[0]; }
    void heapifyDown(int i){
        while(true){
            int largest = i;
            for(int k=1;k<=d;k++){
                int c = kthchild(i,k);
                if(c < (int)a.size() && a[c] > a[largest]) largest = c;
            }
            if(largest==i) break;
            swap(a[i], a[largest]); i=largest;
        }
    }
    void pop(){
        if(a.empty()) return;
        a[0]=a.back(); a.pop_back();
        if(!a.empty()) heapifyDown(0);
    }
    bool empty(){ return a.empty(); }
};
int main(){
    int d=3; DHeap h(d);
    int x;
    while(cin>>x){ if(x==0) break; h.push(x); }
    while(!h.empty()){ cout<<h.top()<<" "; h.pop(); }
    cout<<"\n";
    return 0;
}