#include <bits/stdc++.h>
using namespace std;
int idx=0, compCount=0;
vector<int> id, low, onStack;
stack<int> st;
vector<vector<int>> comps;
void dfs(int u, const vector<vector<int>>& g){
    id[u]=low[u]=++idx;
    st.push(u); onStack[u]=1;
    for(int v: g[u]){
        if(id[v]==0){ dfs(v,g); low[u]=min(low[u], low[v]); }
        else if(onStack[v]) low[u]=min(low[u], id[v]);
    }
    if(low[u]==id[u]){
        vector<int> comp;
        while(true){
            int v=st.top(); st.pop(); onStack[v]=0;
            comp.push_back(v);
            if(v==u) break;
        }
        comps.push_back(comp);
        compCount++;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    vector<vector<int>> g(n);
    for(int i=0;i<m;i++){ int u,v; cin>>u>>v; g[u].push_back(v); }
    id.assign(n,0); low.assign(n,0); onStack.assign(n,0);
    for(int i=0;i<n;i++) if(id[i]==0) dfs(i,g);
    cout<<"Número de componentes: "<<compCount<<"\n";
    for(int i=0;i<comps.size();++i){
        cout<<"Componente "<<i<<": ";
        for(int v: comps[i]) cout<<v<<" ";
        cout<<"\n";
    }
    return 0;
}