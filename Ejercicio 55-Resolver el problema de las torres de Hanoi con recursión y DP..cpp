#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
vector<pair<int,int>> moves;
void hanoi_rec(int n, int from, int aux, int to){
    if(n==0) return;
    hanoi_rec(n-1, from, to, aux);
    moves.emplace_back(from, to);
    hanoi_rec(n-1, aux, from, to);
}
ull pow2_minus1(int n){
    if(n>=64) return ULLONG_MAX; // no cabe
    return ((1ULL<<n) - 1ULL);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if(!(cin>>n)) return 0;
    ull mins = pow2_minus1(n);
    if(mins==ULLONG_MAX) cout<<"Overflow (n demasiado grande para contar exacto en 64-bit)\n";
    else cout<<mins<<"\n";
    if(n <= 20){ // imprimimos movimientos solo si razonable
        hanoi_rec(n, 1, 2, 3);
        for(auto &p: moves) cout<<p.first<<" "<<p.second<<"\n";
    }
    return 0;
}