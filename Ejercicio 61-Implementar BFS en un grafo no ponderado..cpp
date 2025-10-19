#include <bits/stdc++.h>
using namespace std;
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
    const int INF = -1;
    vector<int> dist(n, INF), parent(n, -1);
    queue<int> q;
    dist[s]=0; q.push(s);
    while(!q.empty()){
        int u=q.front(); q.pop();
        for(int v: g[u]){
            if(dist[v]==INF){
                dist[v]=dist[u]+1;
                parent[v]=u;
                q.push(v);
            }
        }
    }
    for(int i=0;i<n;i++) cout<<dist[i]<<(i+1==n?'\n':' ');
    for(int i=0;i<n;i++) cout<<parent[i]<<(i+1==n?'\n':' ');
    return 0;
}