#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> grafo(n);
    vector<int> indeg(n, 0), outdeg(n, 0);
    vector<pair<int,int>> aristas(m);
    for (int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        aristas[i] = {u, v};
        grafo[u].push_back({v, i});
        outdeg[u]++; indeg[v]++;
    }
    for (int i = 0; i < n; ++i)
        if (indeg[i] != outdeg[i]) {
            cout << "NO EULERIAN CYCLE\n";
            return 0;
        }
    vector<int> usado(m, 0), indice(n, 0);
    vector<int> camino, pila = {0};
    while (!pila.empty()) {
        int v = pila.back();
        while (indice[v] < (int)grafo[v].size() && usado[grafo[v][indice[v]].second])
            indice[v]++;
        if (indice[v] == (int)grafo[v].size()) {
            camino.push_back(v);
            pila.pop_back();
        } else {
            auto [h, id] = grafo[v][indice[v]];
            usado[id] = 1;
            pila.push_back(h);
        }
    }
    if ((int)camino.size() != m + 1) {
        cout << "NO EULERIAN CYCLE\n";
    } else {
        reverse(camino.begin(), camino.end());
        for (int v : camino) cout << v << " ";
        cout << "\n";
    }
}