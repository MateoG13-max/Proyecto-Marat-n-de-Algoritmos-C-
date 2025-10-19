// Ejercicio 949 - Usar std::priority_queue para resolver el problema del k-ésimo mayor
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k; if(!(cin>>n>>k)) return 0;
    priority_queue<int, vector<int>, greater<int>> minheap;
    for(int i=0;i<n;i++){int x;cin>>x; if((int)minheap.size()<k) minheap.push(x); else if(x>minheap.top()){minheap.pop();minheap.push(x);}}
    if(minheap.size()==k) cout<<minheap.top()<<"\n"; else cout<<"No hay k elementos\n";
    return 0;
}
