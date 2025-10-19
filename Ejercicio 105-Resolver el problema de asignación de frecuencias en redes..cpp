#include <bits/stdc++.h>
using namespace std;
struct Arista { int u, v, l, c; };
int main() {
    int n, m; cin >> n >> m;
    vector<Arista> aristas(m);
    vector<int> demanda(n, 0);
    for (auto& e : aristas) {
        cin >> e.u >> e.v >> e.l >> e.c;
        demanda[e.u] -= e.l;
        demanda[e.v] += e.l;
    }
    int s = n, t = n + 1;
    vector<vector<int>> cap(n + 2, vector<int>(n + 2));
    for (auto& e : aristas) cap[e.u][e.v] = e.c - e.l;
    int suma = 0;
    for (int i = 0; i < n; ++i) {
        if (demanda[i] > 0) { cap[s][i] = demanda[i]; suma += demanda[i]; }
        else if (demanda[i] < 0) cap[i][t] = -demanda[i];
    }
    vector<vector<int>> adj(n + 2);
    for (int i = 0; i <= n + 1; ++i)
        for (int j = 0; j <= n + 1; ++j)
            if (cap[i][j]) { adj[i].push_back(j); adj[j].push_back(i); }
    auto bfs = [&](vector<int>& par) {
        fill(par.begin(), par.end(), -1);
        queue<int> q; q.push(s); par[s] = -2;
        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (int v : adj[u])
                if (par[v] == -1 && cap[u][v]) {
                    par[v] = u;
                    if (v == t) return true;
                    q.push(v);
                }
        }
        return false;
    };
    int flujo = 0; vector<int> par(n + 2);
    while (bfs(par)) {
        for (int v = t; v != s; v = par[v]) {
            int u = par[v];
            cap[u][v]--; cap[v][u]++;
        }
        flujo++;
    }
    cout << (flujo == suma ? "Posible\n" : "Imposible\n");
}