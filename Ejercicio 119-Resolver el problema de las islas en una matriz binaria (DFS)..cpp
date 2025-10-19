#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> g;
vector<int> tin, bajo, vis;
int timer = 0;
void dfs(int u, int p=-1) {
    vis[u] = 1;
    tin[u] = bajo[u] = timer++;
    for (int v : g[u]) {
        if (v == p) continue;
        if (vis[v]) bajo[u] = min(bajo[u], tin[v]);
        else {
            dfs(v, u);
            bajo[u] = min(bajo[u], bajo[v]);
            if (bajo[v] > tin[u]) cout << u << "-" << v << " es un puente\n";
        }
    }
}

int main() {
    int n, m; cin >> n >> m;
    g.assign(n, {});
    for (int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        g[u].push_back(v); g[v].push_back(u);
    }
    tin.assign(n, -1); bajo.assign(n, -1); vis.assign(n, 0);
    for (int i = 0; i < n; ++i) if (!vis[i]) dfs(i);
}