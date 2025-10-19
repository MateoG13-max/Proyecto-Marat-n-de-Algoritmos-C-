#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
struct Edge{int u,v; long long w;};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    vector<Edge> edges(m);
    for(int i=0;i<m;i++) cin>>edges[i].u>>edges[i].v>>edges[i].w;
    sort(edges.begin(), edges.end(), [](const Edge&a,const Edge&b){ return a.w < b.w; });
    DSU dsu(n);
    long long cost = 0;
    vector<Edge> chosen;
    for(auto &e: edges){
        if(dsu.unite(e.u, e.v)){
            cost += e.w;
            chosen.push_back(e);
        }
    }
    if((int)chosen.size() != n-1){
        cout<<"NO MST\n";
        return 0;
    }
    cout<<cost<<"\n";
    for(auto &e: chosen) cout<<e.u<<" "<<e.v<<" "<<e.w<<"\n";
    return 0;
}