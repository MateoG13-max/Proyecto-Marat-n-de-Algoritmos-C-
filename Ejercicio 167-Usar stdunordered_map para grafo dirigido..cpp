// Ejercicio 967 - Usar std::map para grafo dirigido
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m; cin >> m;
    map<int, map<int, int>> grafo;
    for (int i = 0; i < m; ++i) {
        int u, v, w; cin >> u >> v >> w;
        grafo[u][v] = w;
    }
    for (auto &p : grafo) {
        int u = p.first;
        for (auto &q : p.second) {
            int v = q.first; int w = q.second;
            cout << u << " -> " << v << " (peso " << w << ")\n";
        }
    }
    return 0;
}