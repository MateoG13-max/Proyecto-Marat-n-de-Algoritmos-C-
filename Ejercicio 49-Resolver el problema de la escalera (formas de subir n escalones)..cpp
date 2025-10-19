#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    if (n <= 1) { cout << 1 << '\n'; return 0; }
    vector<long long> dp(n+1, 0);
    dp[0] = 1; dp[1] = 1;
    for (int i = 2; i <= n; ++i) dp[i] = dp[i-1] + dp[i-2];
    cout << dp[n] << '\n';
    return 0;
}