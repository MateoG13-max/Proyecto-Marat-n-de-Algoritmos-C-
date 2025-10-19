#include <bits/stdc++.h>
using namespace std;
int timerGlobal = 0;
void dfs(int u, const vector<vector<int>>& g, vector<int>& vis, vector<int>& tin, vector<int>& tout, vector<int>& parent){
    vis[u]=1;
    tin[u]=++timerGlobal;
    for(int v: g[u]){
        if(!vis[v]){
            parent[v]=u;
            dfs(v,g,vis,tin,tout,parent);
        }
    }
    tout[u]=++timerGlobal;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    if(!(cin>>n>>m)) return 0;
    vector<vector<int>> g(n);
    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int s; cin>>s;
    vector<int> vis(n,0), tin(n,0), tout(n,0), parent(n,-1);
    dfs(s,g,vis,tin,tout,parent);
    for(int i=0;i<n;i++) cout<<tin[i]<<(i+1==n?'\n':' ');
    for(int i=0;i<n;i++) cout<<tout[i]<<(i+1==n?'\n':' ');
    for(int i=0;i<n;i++) cout<<parent[i]<<(i+1==n?'\n':' ');
    return 0;
}