#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> enlaces(n);
    for (int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        enlaces[u].push_back(v);
    }
    double d = 0.85;
    vector<double> rank(n, 1.0 / n), nuevo(n);
    for (int it = 0; it < 100; ++it) {
        fill(nuevo.begin(), nuevo.end(), (1.0 - d) / n);
        for (int u = 0; u < n; ++u)
            for (int v : enlaces[u])
                nuevo[v] += d * rank[u] / enlaces[u].size();
        rank.swap(nuevo);
    }
    cout << fixed << setprecision(4);
    for (int i = 0; i < n; ++i)
        cout << "Nodo " << i << ": " << rank[i] << "\n";
}