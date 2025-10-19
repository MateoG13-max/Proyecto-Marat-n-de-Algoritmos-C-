#include <bits/stdc++.h>
using namespace std;
void dfs1(int u, const vector<vector<int>>& g, vector<int>& vis, vector<int>& order){
    vis[u]=1;
    for(int v: g[u]) if(!vis[v]) dfs1(v,g,vis,order);
    order.push_back(u);
}
void dfs2(int u, const vector<vector<int>>& gr, vector<int>& comp, int id){
    comp[u]=id;
    for(int v: gr[u]) if(comp[v]==-1) dfs2(v,gr,comp,id);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; 
    if(!(cin>>n>>m)) return 0;
    vector<vector<int>> g(n), gr(n);
    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        g[u].push_back(v);
        gr[v].push_back(u);
    }
    vector<int> vis(n,0), order;
    for(int i=0;i<n;i++) if(!vis[i]) dfs1(i,g,vis,order);
    reverse(order.begin(), order.end());
    vector<int> comp(n,-1);
    int id=0;
    for(int u: order) if(comp[u]==-1) dfs2(u,gr,comp,id++);
    cout<<"Número de componentes: "<<id<<"\n";
    for(int i=0;i<id;i++){
        cout<<"Componente "<<i<<": ";
        for(int j=0;j<n;j++) if(comp[j]==i) cout<<j<<" ";
        cout<<"\n";
    }
    return 0;
}