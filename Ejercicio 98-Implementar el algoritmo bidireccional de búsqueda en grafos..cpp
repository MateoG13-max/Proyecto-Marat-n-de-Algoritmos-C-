#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, s, t;
    cin >> n >> m >> s >> t;
    vector<vector<int>> grafo(n);
    for (int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }
    vector<int> dist1(n, -1), dist2(n, -1);
    queue<int> q1, q2;
    q1.push(s); dist1[s] = 0;
    q2.push(t); dist2[t] = 0;
    while (!q1.empty() || !q2.empty()) {
        if (!q1.empty()) {
            int u = q1.front(); q1.pop();
            for (int v : grafo[u]) {
                if (dist1[v] == -1) {
                    dist1[v] = dist1[u] + 1;
                    q1.push(v);
                    if (dist2[v] != -1) {
                        cout << dist1[v] + dist2[v] << "\n";
                        return 0;
                    }
                }
            }
        }
        if (!q2.empty()) {
            int u = q2.front(); q2.pop();
            for (int v : grafo[u]) {
                if (dist2[v] == -1) {
                    dist2[v] = dist2[u] + 1;
                    q2.push(v);
                    if (dist1[v] != -1) {
                        cout << dist1[v] + dist2[v] << "\n";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO CONECTADO\n";
}