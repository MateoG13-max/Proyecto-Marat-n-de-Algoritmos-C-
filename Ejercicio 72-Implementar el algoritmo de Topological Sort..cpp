#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    if(!(cin>>n>>m)) return 0;
    vector<vector<int>> g(n);
    vector<int> indeg(n,0);
    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        g[u].push_back(v);
        indeg[v]++;
    }
    queue<int> q;
    for(int i=0;i<n;i++) if(indeg[i]==0) q.push(i);
    vector<int> order;
    while(!q.empty()){
        int u=q.front(); q.pop();
        order.push_back(u);
        for(int v: g[u]){
            if(--indeg[v]==0) q.push(v);
        }
    }
    if((int)order.size()!=n) cout<<"CYCLE\n";
    else{
        for(int i=0;i<n;i++)
            cout<<order[i]<<(i+1==n?'\n':' ');
    }
    return 0;
}