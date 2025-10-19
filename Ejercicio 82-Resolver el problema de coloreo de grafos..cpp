#include <bits/stdc++.h>
using namespace std;
int n,m,K;
vector<vector<int>> g;
vector<int> color;
bool dfs_color(int v){
    if(v==n) return true;
    for(int c=0;c<K;c++){
        bool ok=true;
        for(int u: g[v]) if(color[u]==c){ ok=false; break; }
        if(!ok) continue;
        color[v]=c;
        if(dfs_color(v+1)) return true;
        color[v]=-1;
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    if(!(cin>>n>>m>>K)) return 0;
    g.assign(n,{});
    for(int i=0;i<m;i++){int u,v;cin>>u>>v; g[u].push_back(v); g[v].push_back(u);}
    color.assign(n,-1);
    if(dfs_color(0)){
        cout<<"SI\n";
        for(int i=0;i<n;i++) cout<<color[i]<<(i+1==n?'\n':' ');
    } else cout<<"NO\n";
    return 0;
}