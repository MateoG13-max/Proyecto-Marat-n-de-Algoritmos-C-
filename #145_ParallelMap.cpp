// Ejercicio 145 - Aplicar función en paralelo sobre vector (split simple)
#include <iostream>
#include <vector>
#include <thread>
using namespace std;

void worker(const vector<int>& in, vector<int>& out, int from, int to){
    for(int i=from;i<to;i++) out[i]=in[i]*in[i]; // ejemplo: square
}

int main(){
    int n; cout<<"Tamaño vector: "; cin>>n;
    vector<int> in(n), out(n);
    for(int i=0;i<n;i++) in[i]=i+1;
    int nthreads = min(4, n==0?1:n);
    vector<thread> threads;
    for(int t=0;t<nthreads;t++){
        int from = t*(n/nthreads);
        int to = (t==nthreads-1)? n : (t+1)*(n/nthreads);
        threads.emplace_back(worker, cref(in), ref(out), from, to);
    }
    for(auto &th: threads) th.join();
    cout<<"Resultado: "; for(auto v: out) cout<<v<<" "; cout<<"\n";
    return 0;
}
