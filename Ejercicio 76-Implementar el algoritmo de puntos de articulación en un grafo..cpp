#include <bits/stdc++.h>
using namespace std;
int timerGlob;
vector<int> tin, low, visited;
vector<vector<int>> g;
set<int> articulations;
void dfs(int u, int parent){
    visited[u]=1;
    tin[u]=low[u]=++timerGlob;
    int children=0;
    for(int v: g[u]){
        if(v==parent) continue;
        if(visited[v]){
            low[u]=min(low[u], tin[v]);
        } else {
            ++children;
            dfs(v,u);
            low[u]=min(low[u], low[v]);
            if(parent!=-1 && low[v] >= tin[u]) articulations.insert(u);
        }
    }
    if(parent==-1 && children>1) articulations.insert(u);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    if(!(cin>>n>>m)) return 0;
    g.assign(n, {});
    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    tin.assign(n,0); low.assign(n,0); visited.assign(n,0);
    timerGlob=0;
    for(int i=0;i<n;i++) if(!visited[i]) dfs(i,-1);
    for(int v: articulations) cout<<v<<"\n";
    return 0;
}