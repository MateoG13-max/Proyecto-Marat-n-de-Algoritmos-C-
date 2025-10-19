#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct Edge{int to; ll cap; int rev;};
int n;
vector<vector<Edge>> G;
void addEdge(int u,int v,ll c){
    G[u].push_back({v,c,(int)G[v].size()});
    G[v].push_back({u,0,(int)G[u].size()-1});
}
vector<int> seen;
ll dfs(int v,int t,ll f){
    if(v==t) return f;
    seen[v]=1;
    for(auto &e: G[v]){
        if(!seen[e.to] && e.cap>0){
            ll ret = dfs(e.to, t, min(f, e.cap));
            if(ret>0){
                e.cap -= ret;
                G[e.to][e.rev].cap += ret;
                return ret;
            }
        }
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m,s,t; if(!(cin>>n>>m>>s>>t)) return 0;
    G.assign(n, {});
    for(int i=0;i<m;i++){ int u,v; long long c; cin>>u>>v>>c; addEdge(u,v,c); }
    ll flow=0;
    while(true){
        seen.assign(n,0);
        ll f = dfs(s,t,LLONG_MAX);
        if(f==0) break;
        flow += f;
    }
    cout<<flow<<"\n";
    return 0;
}