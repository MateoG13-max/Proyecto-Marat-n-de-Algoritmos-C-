#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (1LL<<60);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, inicio, destino, k;
    if (!(cin >> n >> m >> inicio >> destino >> k)) return 0;
    vector<vector<pair<int,ll>>> grafo(n);
    for (int i = 0; i < m; ++i) {
        int u, v; ll w; cin >> u >> v >> w;
        grafo[u].push_back({v, w});
        grafo[v].push_back({u, w});
    }
    vector<int> obligatorios(k);
    for (int i = 0; i < k; ++i) cin >> obligatorios[i];
    vector<int> nodos;
    nodos.push_back(inicio);
    for (int x : obligatorios) nodos.push_back(x);
    nodos.push_back(destino);
    int T = (int)nodos.size();
    vector<vector<ll>> distT(T, vector<ll>(T, INF));
    for (int i = 0; i < T; ++i) {
        int origen = nodos[i];
        vector<ll> d(n, INF);
        d[origen] = 0;
        priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
        pq.push({0LL, origen});
        while (!pq.empty()) {
            auto top = pq.top(); pq.pop();
            ll du = top.first;
            int u = top.second;
            if (du != d[u]) continue;
            for (auto ar : grafo[u]) {
                int v = ar.first; ll w = ar.second;
                if (d[v] > du + w) {
                    d[v] = du + w;
                    pq.push({d[v], v});
                }
            }
        }
        for (int j = 0; j < T; ++j) distT[i][j] = d[nodos[j]];
    }
    int FULL = 1 << T;
    vector<vector<ll>> dp(FULL, vector<ll>(T, INF));
    int inicioMask = 1 << 0;
    dp[inicioMask][0] = 0;
    for (int mask = 0; mask < FULL; ++mask) {
        for (int last = 0; last < T; ++last) {
            if (dp[mask][last] == INF) continue;
            for (int nxt = 0; nxt < T; ++nxt) {
                if (mask & (1 << nxt)) continue;
                if (distT[last][nxt] >= INF/4) continue;
                int nmask = mask | (1 << nxt);
                dp[nmask][nxt] = min(dp[nmask][nxt], dp[mask][last] + distT[last][nxt]);
            }
        }
    }
    ll respuesta = INF;
    int objetivoMask = (1 << T) - 1;
    respuesta = dp[objetivoMask][T-1];
    if (respuesta >= INF/4) cout << -1 << "\n"; else cout << respuesta << "\n";
    return 0;
}