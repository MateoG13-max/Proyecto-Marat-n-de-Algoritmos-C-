#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct Edge { int to; ll w; };
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; 
    if (!(cin >> n >> m)) return 0;
    vector<vector<Edge>> g(n);
    for (int i = 0; i < m; ++i) {
        int u, v; ll w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    vector<ll> minEdge(n, LLONG_MAX);
    vector<int> parent(n, -1);
    vector<bool> inMST(n, false);
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<>> pq;
    minEdge[0] = 0;
    pq.push({0, 0});
    ll cost = 0;
    while (!pq.empty()) {
        auto [w,u] = pq.top(); pq.pop();
        if (inMST[u]) continue;
        inMST[u] = true;
        cost += w;
        for (auto &e : g[u]) {
            if (!inMST[e.to] && e.w < minEdge[e.to]) {
                minEdge[e.to] = e.w;
                parent[e.to] = u;
                pq.push({e.w, e.to});
            }
        }
    }
    cout << "Costo total: " << cost << "\n";
    cout << "Aristas del MST:\n";
    for (int i = 1; i < n; ++i)
        cout << parent[i] << " " << i << " (w=" << minEdge[i] << ")\n";
    return 0;
}