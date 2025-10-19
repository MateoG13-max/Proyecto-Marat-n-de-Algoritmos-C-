#include <bits/stdc++.h>
using namespace std;
int N, meta;
vector<vector<pair<int,int>>> grafo;
vector<int> heur;
bool dfs(int nodo, int g, int limite, vector<int>& camino, vector<int>& usado) {
    int f = g + heur[nodo];
    if (f > limite) return false;
    if (nodo == meta) return true;
    usado[nodo] = 1;
    for (auto [sig, costo] : grafo[nodo]) {
        if (!usado[sig]) {
            camino.push_back(sig);
            if (dfs(sig, g + costo, limite, camino, usado)) return true;
            camino.pop_back();
        }
    }
    usado[nodo] = 0;
    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, inicio;
    cin >> N >> m >> inicio >> meta;
    grafo.assign(N, {});
    for (int i = 0; i < m; ++i) {
        int u, v, w; cin >> u >> v >> w;
        grafo[u].push_back({v, w});
    }
    heur.resize(N);
    for (int i = 0; i < N; ++i) cin >> heur[i];
    int limite = heur[inicio];
    vector<int> camino = {inicio}, usado(N, 0);
    while (true) {
        if (dfs(inicio, 0, limite, camino, usado)) break;
        limite++;
    }
    for (int v : camino) cout << v << " ";
    cout << "\n";
}