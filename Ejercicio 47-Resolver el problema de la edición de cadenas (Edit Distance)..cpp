#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    if (!getline(cin, s)) return 0;
    if (!getline(cin, t)) return 0;
    int n = (int)s.size(), m = (int)t.size();
    if (m < n) {
        swap(s, t);
        swap(n, m);
    }
    vector<int> prev(m+1), cur(m+1);
    for (int j = 0; j <= m; ++j) prev[j] = j;
    for (int i = 1; i <= n; ++i) {
        cur[0] = i;
        for (int j = 1; j <= m; ++j) {
            if (s[i-1] == t[j-1]) cur[j] = prev[j-1];
            else cur[j] = 1 + min({ prev[j], cur[j-1], prev[j-1] });
        }
        swap(prev, cur);
    }
    cout << prev[m] << '\n';
    return 0;
}