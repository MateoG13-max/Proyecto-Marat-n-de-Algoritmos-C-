#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    long long sum = 0;
    for (int i = 0; i < n; ++i) { cin >> a[i]; sum += a[i]; }
    if (sum % 2 != 0) { cout << 0 << '\n'; return 0; }
    int S = (int)(sum / 2);
    vector<char> dp(S + 1, 0); dp[0] = 1;
    for (int x : a) {
        if (x > S) continue;
        for (int s = S; s >= x; --s) dp[s] = dp[s] | dp[s - x];
    }
    cout << (dp[S] ? 1 : 0) << '\n';
    return 0;
}