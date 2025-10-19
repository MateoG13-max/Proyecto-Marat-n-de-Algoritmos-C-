// Ejercicio 964 - Implementar Fenwick Tree (Binary Indexed Tree) para suma y actualización puntual
#include <bits/stdc++.h>
using namespace std;
struct Fenwick {
    int n;
    vector<long long> bit;
    Fenwick(int n): n(n), bit(n+1,0) {}
    void add(int idx, long long delta) { 
        for (; idx <= n; idx += idx & -idx) bit[idx] += delta;
    }
    long long sum(int idx) {
        long long res = 0;
        for (; idx > 0; idx -= idx & -idx) res += bit[idx];
        return res;
    }
    long long range_sum(int l, int r) { return sum(r) - sum(l-1); }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if (!(cin >> n)) return 0;
    Fenwick fw(n);
    for (int i = 1; i <= n; ++i) { long long x; cin >> x; fw.add(i, x); }
    string op;
    while (cin >> op) {
        if (op == "add") {
            int idx; long long delta; cin >> idx >> delta;
            fw.add(idx, delta);
        } else if (op == "sum") {
            int l, r; cin >> l >> r;
            cout << fw.range_sum(l, r) << "\n";
        }
    }
    return 0;
}