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
ll maxflow(int s,int t){
    ll flow=0;
    while(true){
        vector<int> parent_v(n,-1), parent_e(n,-1);
        queue<int> q; q.push(s); parent_v[s]=s;
        while(!q.empty() && parent_v[t]==-1){
            int v=q.front(); q.pop();
            for(int i=0;i<(int)G[v].size();++i){
                auto &e = G[v][i];
                if(parent_v[e.to]==-1 && e.cap>0){
                    parent_v[e.to]=v; parent_e[e.to]=i;
                    q.push(e.to);
                    if(e.to==t) break;
                }
            }
        }
        if(parent_v[t]==-1) break;
        ll aug=LLONG_MAX;
        int v=t;
        while(v!=s){
            int pv = parent_v[v], pe = parent_e[v];
            aug = min(aug, G[pv][pe].cap);
            v = pv;
        }
        v=t;
        while(v!=s){
            int pv = parent_v[v], pe = parent_e[v];
            G[pv][pe].cap -= aug;
            G[v][G[pv][pe].rev].cap += aug;
            v = pv;
        }
        flow += aug;
    }
    return flow;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m,s,t; if(!(cin>>n>>m>>s>>t)) return 0;
    G.assign(n,{});
    for(int i=0;i<m;i++){ int u,v; long long c; cin>>u>>v>>c; addEdge(u,v,c); }
    cout<<maxflow(s,t)<<"\n";
    return 0;
}