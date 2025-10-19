#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, s; cin >> n >> m >> s;
    vector<vector<int>> g(n);
    for (int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> vis(n, 0);
    stack<int> st;
    st.push(s);
    while (!st.empty()) {
        int u = st.top(); st.pop();
        if (vis[u]) continue;
        vis[u] = 1; cout << u << " ";
        for (int v : g[u]) if (!vis[v]) st.push(v);
    }
}