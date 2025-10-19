#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (1LL<<60);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    vector<vector<pair<int,ll>>> g(n);
    for(int i=0;i<m;i++){ int u,v; ll w; cin>>u>>v>>w; g[u].push_back({v,w}); }
    int s; cin>>s;
    vector<ll> dist(n, INF);
    vector<int> parent(n, -1);
    dist[s]=0;
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
    pq.push({0,s});
    while(!pq.empty()){
        auto [d,u] = pq.top(); pq.pop();
        if(d!=dist[u]) continue;
        for(auto [v,w]: g[u]){
            if(dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                parent[v] = u;
                pq.push({dist[v], v});
            }
        }
    }
    for(int i=0;i<n;i++){
        if(dist[i]==INF) cout<<-1; else cout<<dist[i];
        cout<<(i+1==n?'\n':' ');
    }
    for(int i=0;i<n;i++) cout<<parent[i]<<(i+1==n?'\n':' ');
    return 0;
}