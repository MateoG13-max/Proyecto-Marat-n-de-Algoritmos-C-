#include <bits/stdc++.h>
using namespace std;
int timer=0;
vector<int> tin, low;
vector<vector<int>> g;
vector<pair<int,int>> bridges;
void dfs(int u, int p=-1){
    tin[u]=low[u]=++timer;
    for(int v: g[u]){
        if(v==p) continue;
        if(!tin[v]){
            dfs(v,u);
            low[u]=min(low[u],low[v]);
            if(low[v]>tin[u]) bridges.push_back({u,v});
        } else low[u]=min(low[u],tin[v]);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    if(!(cin>>n>>m)) return 0;
    g.assign(n,{});
    for(int i=0;i<m;i++){ int u,v; cin>>u>>v; g[u].push_back(v); g[v].push_back(u); }
    tin.assign(n,0); low.assign(n,0);
    for(int i=0;i<n;i++) if(!tin[i]) dfs(i);
    cout<<"Puentes encontrados: "<<bridges.size()<<"\n";
    for(auto &e: bridges) cout<<e.first<<" "<<e.second<<"\n";
    return 0;
}