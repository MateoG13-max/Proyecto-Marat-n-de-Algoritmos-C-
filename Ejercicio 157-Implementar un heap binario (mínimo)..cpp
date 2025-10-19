// Ejercicio 957 - Implementar un heap binario (máximo) - manual (vector)
#include <bits/stdc++.h>
using namespace std;
struct MaxHeap {
    vector<int> a;
    void push(int x){ a.push_back(x); push_heap(a.begin(), a.end()); }
    int top(){ return a.empty()?INT_MIN:a.front(); }
    void pop(){ pop_heap(a.begin(), a.end()); a.pop_back(); }
    bool empty(){ return a.empty(); }
};
int main(){
    MaxHeap h; int x;
    while(cin>>x){ if(x==0) break; h.push(x); }
    while(!h.empty()){ cout<<h.top()<<" "; h.pop(); }
    cout<<"\n";
    return 0;
}
