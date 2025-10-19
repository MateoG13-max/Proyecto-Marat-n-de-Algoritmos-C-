#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (1LL<<60);
struct Edge{ int u,v; ll w; };
vector<ll> bellman_ford(int n, const vector<Edge>& edges, int src, bool &hasNegCycle){
    vector<ll> dist(n, INF); dist[src]=0;
    for(int iter=0; iter<n-1; ++iter){
        bool changed=false;
        for(const auto &e: edges){
            if(dist[e.u] < INF && dist[e.v] > dist[e.u] + e.w){
                dist[e.v] = dist[e.u] + e.w;
                changed=true;
            }
        }
        if(!changed) break;
    }
    hasNegCycle = false;
    for(const auto &e: edges){
        if(dist[e.u] < INF && dist[e.v] > dist[e.u] + e.w){ hasNegCycle = true; break; }
    }
    return dist;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    vector<Edge> edges;
    vector<vector<pair<int,ll>>> g(n);
    for(int i=0;i<m;i++){
        int u,v; ll w; cin>>u>>v>>w;
        edges.push_back({u,v,w});
        g[u].push_back({v,w});
    }
    vector<Edge> edgesWithQ = edges;
    for(int v=0; v<n; ++v) edgesWithQ.push_back({n, v, 0});
    bool hasNegCycle=false;
    vector<ll> h = bellman_ford(n+1, edgesWithQ, n, hasNegCycle);
    if(hasNegCycle){ cout<<"NEGATIVE CYCLE\n"; return 0; }
    vector<vector<pair<int,ll>>> g_rew(n);
    for(const auto &e: edges){
        ll wprime = e.w + h[e.u] - h[e.v];
        if(wprime < 0) wprime = 0;
        g_rew[e.u].push_back({e.v, wprime});
    }
    vector<vector<ll>> distAll(n, vector<ll>(n, INF));
    for(int s=0; s<n; ++s){
        priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
        distAll[s][s] = 0;
        pq.push({0, s});
        while(!pq.empty()){
            auto [d,u] = pq.top(); pq.pop();
            if(d!=distAll[s][u]) continue;
            for(auto [v,w]: g_rew[u]){
                if(distAll[s][v] > distAll[s][u] + w){
                    distAll[s][v] = distAll[s][u] + w;
                    pq.push({distAll[s][v], v});
                }
            }
        }
        for(int v=0; v<n; ++v){
            if(distAll[s][v] < INF) distAll[s][v] = distAll[s][v] - h[s] + h[v];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(distAll[i][j] >= INF/4) cout<<-1;
            else cout<<distAll[i][j];
            cout<<(j+1==n?'\n':' ');
        }
    }
    return 0;
}