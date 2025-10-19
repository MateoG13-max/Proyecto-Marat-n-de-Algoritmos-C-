#include <bits/stdc++.h>
using namespace std;
bool puede_colorear(vector<vector<int>>& g, int n, int m, vector<int>& color, int v) {
    if (v == n) return true;
    for (int c = 1; c <= m; ++c) {
        bool ok = true;
        for (int u : g[v]) if (color[u] == c) { ok = false; break; }
        if (ok) {
            color[v] = c;
            if (puede_colorear(g, n, m, color, v + 1)) return true;
            color[v] = 0;
        }
    }
    return false;
}
int main() {
    int n, e, m; cin >> n >> e >> m;
    vector<vector<int>> g(n);
    for (int i = 0; i < e; ++i) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> color(n, 0);
    if (puede_colorear(g, n, m, color, 0)) {
        for (int c : color) cout << c << " ";
        cout << "\n";
    } else cout << "No es posible\n";
}