#include <bits/stdc++.h>
using namespace std;
struct Arista {
    int destino, peso, capacidad;
};
struct Nodo {
    int id, dist, carga;
    bool operator>(const Nodo& o) const { return dist > o.dist; }
};
int main() {
    int n, m, capacidad_max;
    cin >> n >> m >> capacidad_max;
    vector<vector<Arista>> grafo(n);
    for (int i = 0; i < m; ++i) {
        int u, v, w, c; cin >> u >> v >> w >> c;
        grafo[u].push_back({v, w, c});
        grafo[v].push_back({u, w, c});
    }
    int inicio, fin; cin >> inicio >> fin;
    vector<vector<int>> dist(n, vector<int>(capacidad_max + 1, 1e9));
    priority_queue<Nodo, vector<Nodo>, greater<Nodo>> pq;
    dist[inicio][0] = 0;
    pq.push({inicio, 0, 0});
    while (!pq.empty()) {
        auto [u, d, c] = pq.top(); pq.pop();
        if (d > dist[u][c]) continue;
        for (auto& ar : grafo[u]) {
            int nc = c + ar.capacidad;
            if (nc <= capacidad_max && dist[ar.destino][nc] > d + ar.peso) {
                dist[ar.destino][nc] = d + ar.peso;
                pq.push({ar.destino, dist[ar.destino][nc], nc});
            }
        }
    }
    int mejor = *min_element(dist[fin].begin(), dist[fin].end());
    cout << (mejor == 1e9 ? -1 : mejor) << "\n";
}