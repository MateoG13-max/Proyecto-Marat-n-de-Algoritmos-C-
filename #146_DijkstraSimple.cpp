// Ejercicio 146 - Dijkstra en grafo pequeño (matriz de adyacencia)
#include <iostream>
#include <vector>
#include <limits>
using namespace std;
const int INF = 1e9;
int main(){
    int n; cout<<"Número de nodos: "; cin>>n;
    vector<vector<int>> w(n, vector<int>(n, INF));
    for(int i=0;i<n;i++){ for(int j=0;j<n;j++){ if(i==j) w[i][j]=0; else { cout<<"Peso ["<<i<<"]["<<j<<"] (0 para INF): "; cin>>w[i][j]; if(w[i][j]==0) w[i][j]=INF; } } }
    int s; cout<<"Origen: "; cin>>s;
    vector<int> dist(n, INF); dist[s]=0;
    vector<bool> vis(n,false);
    for(int k=0;k<n;k++){
        int u=-1, best=INF;
        for(int i=0;i<n;i++) if(!vis[i] && dist[i]<best){ best=dist[i]; u=i; }
        if(u==-1) break;
        vis[u]=true;
        for(int v=0;v<n;v++) if(dist[v] > dist[u] + w[u][v]) dist[v] = dist[u] + w[u][v];
    }
    cout<<"Distancias desde "<<s<<":\n"; for(int i=0;i<n;i++) cout<<i<<": "<<(dist[i]>=INF ? -1 : dist[i])<<"\n";
    return 0;
}
