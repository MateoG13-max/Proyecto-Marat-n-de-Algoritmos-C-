#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int n,m;
vector<vector<int>> g;
vector<int> pairU, pairV, distHK;
bool bfsHK(){
    queue<int> q;
    for(int u=0;u<n;u++){
        if(pairU[u]==-1){ distHK[u]=0; q.push(u); }
        else distHK[u]=INF;
    }
    bool reachable=false;
    while(!q.empty()){
        int u=q.front(); q.pop();
        for(int v: g[u]){
            if(pairV[v]!=-1 && distHK[pairV[v]]==INF){
                distHK[pairV[v]] = distHK[u] + 1;
                q.push(pairV[v]);
            }
            if(pairV[v]==-1) reachable=true;
        }
    }
    return reachable;
}
bool dfsHK(int u){
    for(int v: g[u]){
        if(pairV[v]==-1 || (distHK[pairV[v]]==distHK[u]+1 && dfsHK(pairV[v]))){
            pairU[u]=v; pairV[v]=u; return true;
        }
    }
    distHK[u]=INF;
    return false;
}
int hopcroftKarp(){
    pairU.assign(n,-1); pairV.assign(m,-1); distHK.assign(n,0);
    int result=0;
    while(bfsHK()){
        for(int u=0; u<n; ++u)
            if(pairU[u]==-1 && dfsHK(u)) result++;
    }
    return result;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    if(!(cin>>n>>m)) return 0;
    g.assign(n,{});
    for(int i=0;i<n;i++){
        int k; cin>>k;
        for(int j=0;j<k;j++){ int b; cin>>b; g[i].push_back(b); }
    }
    int ans = hopcroftKarp();
    cout<<ans<<"\n";
    for(int u=0;u<n;u++) if(pairU[u]!=-1) cout<<u<<" "<<pairU[u]<<"\n";
    return 0;
}