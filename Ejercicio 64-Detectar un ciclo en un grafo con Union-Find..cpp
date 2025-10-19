#include <bits/stdc++.h>
using namespace std;
struct DSU {
    vector<int> p, r;
    DSU(int n): p(n), r(n,0){ iota(p.begin(), p.end(), 0); }
    int find(int x){ return p[x]==x?x:p[x]=find(p[x]); }
    bool unite(int a,int b){
        a=find(a); b=find(b);
        if(a==b) return false;
        if(r[a]<r[b]) swap(a,b);
        p[b]=a;
        if(r[a]==r[b]) r[a]++;
        return true;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    DSU dsu(n);
    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        if(!dsu.unite(u,v)){ cout<<1<<"\n"; return 0; }
    }
    cout<<0<<"\n";
    return 0;
}