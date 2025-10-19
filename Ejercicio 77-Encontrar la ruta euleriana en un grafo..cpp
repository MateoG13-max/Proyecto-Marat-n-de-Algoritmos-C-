#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    vector<vector<pair<int,int>>> g(n);
    vector<int> deg(n,0);
    vector<pair<int,int>> edges(m);
    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        edges[i]={u,v};
        g[u].push_back({v,i});
        g[v].push_back({u,i});
        deg[u]++; deg[v]++;
    }
    int start = -1;
    for(int i=0;i<n;i++) if(deg[i]>0){ start=i; break; }
    if(start==-1){
        cout<<1<<"\n"<<0<<"\n";
        return 0;
    }
    vector<char> visV(n,0);
    stack<int> stc;
    stc.push(start);
    vector<int> stackb; stackb.push_back(start);
    visV[start]=1;
    for(size_t idx=0; idx<stackb.size(); ++idx){
        int u=stackb[idx];
        for(auto &pr: g[u]){
            int v=pr.first;
            if(!visV[v]){ visV[v]=1; stackb.push_back(v); }
        }
    }
    for(int i=0;i<n;i++) if(deg[i]>0 && !visV[i]){ cout<<"NO EULERIAN PATH\n"; return 0; }
    vector<int> odd;
    for(int i=0;i<n;i++) if(deg[i]%2==1) odd.push_back(i);
    if(!(odd.size()==0 || odd.size()==2)){ cout<<"NO EULERIAN PATH\n"; return 0; }
    if(odd.size()==2) start=odd[0];
    vector<int> edgePos(n,0);
    vector<char> used(m,0);
    vector<int> path;
    stack<int> cur;
    cur.push(start);
    while(!cur.empty()){
        int v = cur.top();
        while(edgePos[v] < (int)g[v].size() && used[g[v][edgePos[v]].second]) ++edgePos[v];
        if(edgePos[v] == (int)g[v].size()){
            path.push_back(v);
            cur.pop();
        } else {
            auto [to, id] = g[v][edgePos[v]];
            used[id]=1;
            cur.push(to);
        }
    }
    if((int)path.size() != m+1){ cout<<"NO EULERIAN PATH\n"; return 0; }
    reverse(path.begin(), path.end());
    cout<<path.size()<<"\n";
    for(size_t i=0;i<path.size();++i) cout<<path[i]<<(i+1==path.size()?'\n':' ');
    return 0;
}