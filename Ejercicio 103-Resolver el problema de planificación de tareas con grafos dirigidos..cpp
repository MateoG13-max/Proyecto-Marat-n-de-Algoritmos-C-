#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
bool bfs(vector<vector<int>>& cap, vector<vector<int>>& adj, int s, int t, vector<int>& parent) {
    fill(parent.begin(), parent.end(), -1);
    queue<int> q; q.push(s);
    parent[s] = -2;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (parent[v] == -1 && cap[u][v]) {
                parent[v] = u;
                if (v == t) return true;
                q.push(v);
            }
        }
    }
    return false;
}
int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> cap(n, vector<int>(n));
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        cap[u][v] = 1;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int s, t; cin >> s >> t;
    int flujo = 0; vector<int> parent(n);
    while (bfs(cap, adj, s, t, parent)) {
        for (int v = t; v != s; v = parent[v]) {
            int u = parent[v];
            cap[u][v]--; cap[v][u]++;
        }
        flujo++;
    }
    cout << flujo << "\n";
}