#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    vector<vector<int>> g(n);
    for(int i=0;i<m;i++){ int u,v; cin>>u>>v; g[u].push_back(v); }
    if(n>20){
    }
    int FULL = 1<<n;
    const int UNR = -2;
    const int START = -1;
    vector<vector<int>> dp(FULL, vector<int>(n, UNR));
    for(int v=0; v<n; ++v) dp[1<<v][v] = START;
    for(int mask=1; mask<FULL; ++mask){
        for(int u=0; u<n; ++u){
            if(dp[mask][u] != UNR){
                for(int v: g[u]){
                    if(mask & (1<<v)) continue;
                    int nmask = mask | (1<<v);
                    if(dp[nmask][v] == UNR) dp[nmask][v] = u;
                }
            }
        }
    }
    int endV=-1, fullMask = FULL-1;
    for(int v=0; v<n; ++v){
        if(dp[fullMask][v] != UNR){ endV = v; break; }
    }
    if(endV==-1){ cout<<"NO\n"; return 0; }
    vector<int> path;
    int cur = endV, mask = fullMask;
    while(cur != START){
        path.push_back(cur);
        int p = dp[mask][cur];
        mask ^= (1<<cur);
        cur = p;
    }
    reverse(path.begin(), path.end());
    cout<<"YES\n";
    for(int i=0;i<n;i++) cout<<path[i]<<(i+1==n?'\n':' ');
    return 0;
}