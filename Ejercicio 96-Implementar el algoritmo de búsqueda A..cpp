#include <bits/stdc++.h>
using namespace std;
struct Nodo {
    int id;
    double costo, estimado;
    bool operator<(const Nodo& o) const {
        return costo + estimado > o.costo + o.estimado;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, s, t;
    cin >> n >> m >> s >> t;
    vector<vector<pair<int, double>>> grafo(n);
    vector<double> heuristica(n);
    for (int i = 0; i < m; ++i) {
        int u, v; double w; cin >> u >> v >> w;
        grafo[u].push_back({v, w});
    }
    for (int i = 0; i < n; ++i) cin >> heuristica[i];
    vector<double> dist(n, 1e18);
    priority_queue<Nodo> pq;
    pq.push({s, 0, heuristica[s]});
    dist[s] = 0;
    while (!pq.empty()) {
        auto [u, g, h] = pq.top(); pq.pop();
        if (u == t) break;
        for (auto [v, w] : grafo[u]) {
            if (dist[v] > g + w) {
                dist[v] = g + w;
                pq.push({v, dist[v], heuristica[v]});
            }
        }
    }
    cout << (dist[t] == 1e18 ? -1 : dist[t]) << "\n";
}