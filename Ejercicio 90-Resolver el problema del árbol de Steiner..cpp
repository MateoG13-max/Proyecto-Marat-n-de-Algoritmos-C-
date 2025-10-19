#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (1LL<<60);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    vector<vector<pair<int,ll>>> g(n);
    for(int i=0;i<m;i++){ int u,v; ll w; cin>>u>>v>>w; g[u].push_back({v,w}); g[v].push_back({u,w}); }
    int t; cin>>t;
    vector<int> term(t);
    for(int i=0;i<t;i++) cin>>term[i];
    int FULL = 1<<t;
    vector<vector<ll>> dp(FULL, vector<ll>(n, INF));
    for(int i=0;i<t;i++) dp[1<<i][term[i]] = 0;
    for(int mask=1; mask<FULL; ++mask){
        for(int sub = (mask-1)&mask; sub; sub = (sub-1)&mask){
            int other = mask ^ sub;
            for(int v=0; v<n; ++v){
                if(dp[mask][v] > dp[sub][v] + dp[other][v])
                    dp[mask][v] = dp[sub][v] + dp[other][v];
            }
        }
        priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
        vector<ll> dist = dp[mask];
        for(int v=0; v<n; ++v) if(dist[v] < INF) pq.push({dist[v], v});
        while(!pq.empty()){
            auto [d,u] = pq.top(); pq.pop();
            if(d!=dist[u]) continue;
            for(auto [v,w]: g[u]){
                if(dist[v] > d + w){
                    dist[v] = d + w;
                    pq.push({dist[v], v});
                }
            }
        }
        dp[mask].swap(dist);
    }
    ll ans = INF;
    for(int v=0; v<n; ++v) ans = min(ans, dp[FULL-1][v]);
    if(ans>=INF/4) cout<<-1<<"\n"; else cout<<ans<<"\n";
    return 0;
}