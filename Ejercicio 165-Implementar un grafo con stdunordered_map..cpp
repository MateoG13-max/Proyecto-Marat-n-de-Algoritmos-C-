// Ejercicio 965 - Implementar un grafo con std::map y std::vector
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<int, vector<int>> grafo;
    int m; cin >> m; 
    for (int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }
    for (auto &p : grafo) {
        cout << p.first << ": ";
        for (int v : p.second) cout << v << " ";
        cout << "\n";
    }
    return 0;
}