// Ejercicio 963 - Implementar Segment Tree 
#include <bits/stdc++.h>
using namespace std;
struct SegmentTree {
    int n;
    vector<long long> tree;
    SegmentTree(const vector<long long>& a) {
        n = a.size();
        tree.assign(4*n, 0);
        build(1, 0, n-1, a);
    }
    void build(int node, int l, int r, const vector<long long>& a) {
        if (l == r) { tree[node] = a[l]; return; }
        int mid = (l + r)/2;
        build(2*node, l, mid, a);
        build(2*node+1, mid+1, r, a);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
    long long query(int node, int l, int r, int ql, int qr) {
        if (qr < l || ql > r) return 0;
        if (ql <= l && r <= qr) return tree[node];
        int mid = (l + r)/2;
        return query(2*node, l, mid, ql, qr) + query(2*node+1, mid+1, r, ql, qr);
    }
    void update(int node, int l, int r, int idx, long long val) {
        if (l == r) { tree[node] = val; return; }
        int mid = (l + r)/2;
        if (idx <= mid) update(2*node, l, mid, idx, val);
        else update(2*node+1, mid+1, r, idx, val);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
    long long query(int l, int r) { return query(1,0,n-1,l,r); }
    void update(int idx, long long val) { update(1,0,n-1,idx,val); }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if (!(cin >> n)) return 0;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    SegmentTree st(a);
    string op;
    while (cin >> op) {
        if (op == "query") {
            int l, r; cin >> l >> r;
            cout << st.query(l, r) << "\n";
        } else if (op == "update") {
            int idx; long long val; cin >> idx >> val;
            st.update(idx, val);
        }
    }
    return 0;
}