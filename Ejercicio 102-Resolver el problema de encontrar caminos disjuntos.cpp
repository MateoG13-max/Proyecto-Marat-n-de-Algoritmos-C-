#include <bits/stdc++.h>
using namespace std;
struct Arista { int destino; double costo; };
struct Nodo {
    int id; double f, g;
    bool operator>(const Nodo& o) const { return f > o.f; }
};
int main() {
    int n, m; cin >> n >> m;
    vector<vector<Arista>> grafo(n);
    for (int i = 0; i < m; ++i) {
        int u, v; double w; cin >> u >> v >> w;
        grafo[u].push_back({v, w});
        grafo[v].push_back({u, w});
    }
    int inicio, meta; cin >> inicio >> meta;
    vector<double> heuristica(n);
    for (int i = 0; i < n; ++i) cin >> heuristica[i];
    vector<double> g(n, 1e9);
    priority_queue<Nodo, vector<Nodo>, greater<Nodo>> pq;
    g[inicio] = 0;
    pq.push({inicio, heuristica[inicio], 0});
    while (!pq.empty()) {
        auto [u, f, costo] = pq.top(); pq.pop();
        if (u == meta) { cout << g[u] << "\n"; return 0; }
        for (auto& ar : grafo[u]) {
            double ng = g[u] + ar.costo;
            if (ng < g[ar.destino]) {
                g[ar.destino] = ng;
                pq.push({ar.destino, ng + heuristica[ar.destino], ng});
            }
        }
    }
    cout << "-1\n";
}