#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (1LL<<60);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,s,t,K; if(!(cin>>n>>m>>s>>t>>K)) return 0;
    vector<tuple<int,int,ll>> edges;
    for(int i=0;i<m;i++){ int u,v; ll w; cin>>u>>v>>w; edges.emplace_back(u,v,w); }
    vector<ll> prev(n, INF), cur(n, INF);
    prev[s]=0;
    ll ans = INF;
    for(int k=1;k<=K;k++){
        fill(cur.begin(), cur.end(), INF);
        for(auto &e: edges){
            int u,v; ll w; tie(u,v,w)=e;
            if(prev[u] < INF) cur[v] = min(cur[v], prev[u] + w);
        }
        ans = min(ans, cur[t]);
        prev.swap(cur);
    }
    if(ans>=INF/4) cout<<-1<<"\n"; else cout<<ans<<"\n";
    return 0;
}