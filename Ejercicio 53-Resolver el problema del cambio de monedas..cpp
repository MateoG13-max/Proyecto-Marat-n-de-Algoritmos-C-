#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, V;
    if(!(cin>>n>>V)) return 0;
    vector<int> c(n);
    for(int i=0;i<n;i++) cin>>c[i];
    const int INF = 1e9;
    vector<int> dp(V+1, INF);
    dp[0]=0;
    for(int coin: c){
        for(int v=coin; v<=V; ++v){
            dp[v] = min(dp[v], dp[v-coin] + 1);
        }
    }
    if(dp[V]==INF) cout<<-1<<"\n"; else cout<<dp[V]<<"\n";
    return 0;
}