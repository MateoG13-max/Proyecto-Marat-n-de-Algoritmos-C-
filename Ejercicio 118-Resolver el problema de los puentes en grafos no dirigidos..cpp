#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 10000, m = 30000;
    vector<vector<int>> g(n);
    for (int i = 0; i < m; ++i) {
        int u = rand() % n, v = rand() % n;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> vis(n);
    auto t1 = clock();
    queue<int> q; q.push(0); vis[0] = 1;
    while (!q.empty()) { int u = q.front(); q.pop(); for (int v : g[u]) if (!vis[v]) { vis[v]=1; q.push(v);} }
    auto t2 = clock();
    cout << "Tiempo BFS: " << (double)(t2 - t1) / CLOCKS_PER_SEC << "s\n";
}