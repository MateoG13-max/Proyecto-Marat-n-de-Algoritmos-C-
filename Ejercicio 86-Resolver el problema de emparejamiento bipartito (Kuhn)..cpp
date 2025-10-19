#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<vector<int>> g;
vector<int> mt;
vector<int> used;
int iterId=1;
bool tryKuhn(int v){
    if(used[v]==iterId) return false;
    used[v]=iterId;
    for(int to: g[v]){
        if(mt[to]==-1 || tryKuhn(mt[to])){
            mt[to]=v;
            return true;
        }
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    if(!(cin>>n>>m)) return 0;
    g.assign(n,{});
    for(int i=0;i<n;i++){
        int k; cin>>k;
        for(int j=0;j<k;j++){ int b; cin>>b; g[i].push_back(b); }
    }
    mt.assign(m,-1);
    used.assign(n+5,0);
    int match=0;
    for(int v=0; v<n; ++v){
        iterId++;
        if(tryKuhn(v)) match++;
    }
    cout<<match<<"\n";
    for(int b=0;b<m;b++) if(mt[b]!=-1) cout<<mt[b]<<" "<<b<<"\n";
    return 0;
}