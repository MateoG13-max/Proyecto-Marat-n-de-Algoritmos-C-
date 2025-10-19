#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> g;
vector<int> vis;
void dfs(int u) {
    vis[u] = 1; cout << u << " ";
    for (int v : g[u]) if (!vis[v]) dfs(v);
}
int main() {
    int n, m, s; cin >> n >> m >> s;
    g.assign(n, {}); vis.assign(n, 0);
    for (int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        g[u].push_back(v); g[v].push_back(u);
    }
    dfs(s);
}