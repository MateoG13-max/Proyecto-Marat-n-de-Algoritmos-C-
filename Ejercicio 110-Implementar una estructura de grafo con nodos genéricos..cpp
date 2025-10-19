#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(n, 0));
    for (int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        mat[u][v] = 1;
    }
    for (auto& fila : mat) {
        for (int x : fila) cout << x << " ";
        cout << "\n";
    }
}