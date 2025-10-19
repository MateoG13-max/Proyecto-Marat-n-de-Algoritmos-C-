#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> grafo;
vector<int> comp, visitado;
void dfs(int v, int id) {
    visitado[v] = 1;
    comp[v] = id;
    for (int u : grafo[v])
        if (!visitado[u]) dfs(u, id);
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
    visitado.assign(n, 0);
    comp.assign(n, -1);
    int grupos = 0;
    for (int i = 0; i < n; ++i)
        if (!visitado[i])
            dfs(i, grupos++);
    cout << "Número de clústeres: " << grupos << "\n";
    for (int i = 0; i < n; ++i)
        cout << "Nodo " << i << " pertenece al clúster " << comp[i] << "\n";
}