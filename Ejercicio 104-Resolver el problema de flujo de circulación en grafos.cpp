#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> g(n);
    vector<int> indeg(n);
    for (int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        indeg[v]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i) if (!indeg[i]) q.push(i);
    vector<int> orden;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        orden.push_back(u);
        for (int v : g[u]) if (--indeg[v] == 0) q.push(v);
    }
    if ((int)orden.size() != n) cout << "Ciclo detectado\n";
    else for (int x : orden) cout << x << " ";
    cout << "\n";
}