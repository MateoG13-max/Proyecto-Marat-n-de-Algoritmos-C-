#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> grafo;
vector<int> tin, bajo, visitado;
int tiempo;
vector<pair<int,int>> puentes;
void dfs(int v, int padre) {
    visitado[v] = 1;
    tin[v] = bajo[v] = ++tiempo;
    for (int to : grafo[v]) {
        if (to == padre) continue;
        if (visitado[to])
            bajo[v] = min(bajo[v], tin[to]);
        else {
            dfs(to, v);
            bajo[v] = min(bajo[v], bajo[to]);
            if (bajo[to] > tin[v])
                puentes.push_back({v, to});
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    grafo.assign(n, {});
    for (int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }
    tin.assign(n, 0); bajo.assign(n, 0); visitado.assign(n, 0);
    tiempo = 0;
    for (int i = 0; i < n; ++i)
        if (!visitado[i]) dfs(i, -1);

    for (auto &p : puentes) cout << p.first << " " << p.second << "\n";
}