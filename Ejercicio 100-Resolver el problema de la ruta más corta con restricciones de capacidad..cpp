#include <bits/stdc++.h>
using namespace std;
struct Arista {int hasta; long long peso, cap;};
const long long INF = 1e15;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, s, t;
    long long capacidadMin;
    cin >> n >> m >> s >> t >> capacidadMin;
    vector<vector<Arista>> grafo(n);
    for(int i=0;i<m;i++){
        int u,v; long long w,c; cin>>u>>v>>w>>c;
        grafo[u].push_back({v,w,c});
        grafo[v].push_back({u,w,c});
    }
    vector<long long> dist(n, INF);
    priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<>> pq;
    dist[s]=0; pq.push({0,s});
    while(!pq.empty()){
        auto [du,u]=pq.top(); pq.pop();
        if(du!=dist[u]) continue;
        for(auto &e: grafo[u])
            if(e.cap>=capacidadMin && dist[e.hasta]>du+e.peso){
                dist[e.hasta]=du+e.peso;
                pq.push({dist[e.hasta],e.hasta});
            }
    }
    cout << (dist[t]==INF?-1:dist[t]) << "\n";
}