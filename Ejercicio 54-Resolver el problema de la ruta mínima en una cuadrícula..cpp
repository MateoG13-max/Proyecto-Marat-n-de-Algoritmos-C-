#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m,n;
    if(!(cin>>m>>n)) return 0;
    vector<vector<long long>> a(m, vector<long long>(n));
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) cin>>a[i][j];
    vector<vector<long long>> dp(m, vector<long long>(n, LLONG_MAX));
    dp[0][0] = a[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i>0) dp[i][j] = min(dp[i][j], dp[i-1][j] + a[i][j]);
            if(j>0) dp[i][j] = min(dp[i][j], dp[i][j-1] + a[i][j]);
        }
    }
    cout<<dp[m-1][n-1]<<"\n";
    return 0;
}