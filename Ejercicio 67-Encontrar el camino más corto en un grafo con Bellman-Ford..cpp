#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (1LL<<60);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    struct Edge{int u,v; ll w;};
    vector<Edge> edges; edges.reserve(m);
    for(int i=0;i<m;i++){ int u,v; ll w; cin>>u>>v>>w; edges.push_back({u,v,w}); }
    int s; cin>>s;
    vector<ll> dist(n, INF); dist[s]=0;
    for(int iter=0; iter<n-1; ++iter){
        bool changed=false;
        for(auto &e: edges){
            if(dist[e.u] < INF && dist[e.v] > dist[e.u] + e.w){
                dist[e.v] = dist[e.u] + e.w;
                changed=true;
            }
        }
        if(!changed) break;
    }
    for(auto &e: edges){
        if(dist[e.u] < INF && dist[e.v] > dist[e.u] + e.w){
            cout<<"NEGATIVE CYCLE\n"; return 0;
        }
    }
    for(int i=0;i<n;i++){ if(dist[i]==INF) cout<<-1; else cout<<dist[i]; cout<<(i+1==n?'\n':' '); }
    return 0;
}