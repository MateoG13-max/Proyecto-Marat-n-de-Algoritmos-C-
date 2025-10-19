#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if(!(cin>>n)) return 0;
    vector<long long> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    if(n<3){ cout<<0<<"\n"; return 0; }
    const long long INF = (1LL<<62);
    vector<vector<long long>> dp(n, vector<long long>(n, 0));
    for(int len=3; len<=n; ++len){
        for(int i=0;i+len-1<n;i++){
            int j = i+len-1;
            dp[i][j] = INF;
            for(int k=i+1;k<j;k++){
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + v[i]*v[k]*v[j]);
            }
        }
    }
    cout<<dp[0][n-1]<<"\n";
    return 0;
}