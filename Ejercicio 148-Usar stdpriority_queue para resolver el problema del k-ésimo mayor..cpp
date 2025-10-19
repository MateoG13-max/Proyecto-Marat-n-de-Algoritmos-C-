// Ejercicio 948 - Usar std::queue para recorrido BFS (imprime orden BFS)
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, s; if (!(cin >> n >> m >> s)) return 0;
    vector<vector<int>> g(n);
    for (int i=0;i<m;i++){int u,v;cin>>u>>v; g[u].push_back(v); g[v].push_back(u);}
    vector<int> vis(n,0);
    queue<int> q; q.push(s); vis[s]=1;
    while(!q.empty()){
        int u=q.front(); q.pop();
        cout<<u<<" ";
        for (int v:g[u]) if (!vis[v]){vis[v]=1; q.push(v);}
    }
    cout<<"\n";
    return 0;
}
