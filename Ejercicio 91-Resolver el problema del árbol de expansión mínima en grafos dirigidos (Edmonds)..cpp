#include <bits/stdc++.h>
using namespace std;
struct Arista {
    int desde, hasta;
    long long peso;
};
long long arborescencia(int n, int raiz, const vector<Arista>& aristas) {
    const long long INF = 1e15;
    long long total = 0;
    int N = n;
    vector<Arista> E = aristas;
    while (true) {
        vector<long long> minimo(N, INF);
        vector<int> padre(N, -1);
        for (auto &a : E) {
            if (a.desde != a.hasta && a.peso < minimo[a.hasta]) {
                minimo[a.hasta] = a.peso;
                padre[a.hasta] = a.desde;
            }
        }
        minimo[raiz] = 0;
        for (int i = 0; i < N; ++i)
            if (minimo[i] == INF) return -1;
        total += accumulate(minimo.begin(), minimo.end(), 0LL);
        int id = 0;
        vector<int> marca(N, -1), idcomp(N, -1);
        for (int i = 0; i < N; ++i) {
            int v = i;
            while (v != raiz && idcomp[v] == -1 && marca[v] != i)
                marca[v] = i, v = padre[v];
            if (v != raiz && idcomp[v] == -1) {
                for (int u = padre[v]; u != v; u = padre[u])
                    idcomp[u] = id;
                idcomp[v] = id++;
            }
        }
        if (id == 0) break;
        for (int i = 0; i < N; ++i)
            if (idcomp[i] == -1)
                idcomp[i] = id++;
        vector<Arista> nuevo;
        for (auto &a : E) {
            int u = idcomp[a.desde], v = idcomp[a.hasta];
            long long w = a.peso;
            if (u != v) w -= minimo[a.hasta];
            nuevo.push_back({u, v, w});
        }
        N = id;
        raiz = idcomp[raiz];
        E = move(nuevo);
    }
    return total;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, r;
    cin >> n >> m >> r;
    vector<Arista> aristas(m);
    for (int i = 0; i < m; ++i)
        cin >> aristas[i].desde >> aristas[i].hasta >> aristas[i].peso;
    cout << arborescencia(n, r, aristas) << "\n";
}