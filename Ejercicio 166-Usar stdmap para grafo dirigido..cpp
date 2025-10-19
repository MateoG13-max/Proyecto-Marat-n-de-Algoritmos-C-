// Ejercicio 966 - Implementar un grafo con std::unordered_map
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unordered_map<int, vector<int>> grafo;
    int m; cin >> m;
    for (int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }
    // imprimir (orden no garantizado)
    for (auto &p : grafo) {
        cout << p.first << ": ";
        for (int v : p.second) cout << v << " ";
        cout << "\n";
    }
    return 0;
}