// Ejercicio 958 - Implementar un heap binario (mínimo) - manual con greater
#include <bits/stdc++.h>
using namespace std;
struct MinHeap {
    vector<int> a;
    void push(int x){ a.push_back(x); push_heap(a.begin(), a.end(), greater<int>()); }
    int top(){ return a.empty()?INT_MAX:a.front(); }
    void pop(){ pop_heap(a.begin(), a.end(), greater<int>()); a.pop_back(); }
    bool empty(){ return a.empty(); }
};
int main(){
    MinHeap h; int x;
    while(cin>>x){ if(x==0) break; h.push(x); }
    while(!h.empty()){ cout<<h.top()<<" "; h.pop(); }
    cout<<"\n";
    return 0;
}
