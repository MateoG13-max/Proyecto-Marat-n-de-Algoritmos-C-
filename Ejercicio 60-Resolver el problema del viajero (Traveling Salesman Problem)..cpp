#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if(!(cin>>n)) return 0;
    const ll INF = (1LL<<60);
    vector<vector<ll>> cost(n, vector<ll>(n));
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>cost[i][j];
    int FULL = 1<<n;
    vector<vector<ll>> dp(FULL, vector<ll>(n, INF));
    dp[1<<0][0] = 0; 
    for(int mask=0; mask<FULL; ++mask){
        for(int u=0; u<n; ++u){
            if(!(mask & (1<<u))) continue;
            if(dp[mask][u] == INF) continue;
            for(int v=0; v<n; ++v){
                if(mask & (1<<v)) continue;
                int nmask = mask | (1<<v);
                if(cost[u][v] >= INF/4) continue;
                dp[nmask][v] = min(dp[nmask][v], dp[mask][u] + cost[u][v]);
            }
        }
    }
    ll ans = INF;
    for(int u=1; u<n; ++u){
        if(dp[FULL-1][u] < INF && cost[u][0] < INF/4)
            ans = min(ans, dp[FULL-1][u] + cost[u][0]);
    }
    if(ans>=INF/2) cout<<-1<<"\n"; else cout<<ans<<"\n";
    return 0;
}