#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    vector<vector<int>> g(n);
    for(int i=0;i<m;i++){ int u,v; cin>>u>>v; g[u].push_back(v);
    int s,t; cin>>s>>t;
    vector<int> dist(n, -1), parent(n, -1);
    queue<int> q; q.push(s); dist[s]=0;
    while(!q.empty()){
        int u=q.front(); q.pop();
        if(u==t) break;
        for(int v: g[u]) if(dist[v]==-1){
            dist[v]=dist[u]+1; parent[v]=u; q.push(v);
        }
    }
    if(dist[t]==-1){ cout<<-1<<"\n"; return 0; }
    cout<<dist[t]<<"\n";
    vector<int> path;
    for(int v=t; v!=-1; v=parent[v]) path.push_back(v);
    reverse(path.begin(), path.end());
    for(size_t i=0;i<path.size();++i) cout<<path[i]<<(i+1==path.size()?'\n':' ');
    return 0;
}