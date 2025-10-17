// Ejercicio 147 - BFS en una cuadrícula para distancia mínima (4-direcciones)
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int r,c; cout<<"Filas y columnas: "; cin>>r>>c;
    vector<string> grid(r);
    cout<<"Ingresa filas ('.' libre, '#' muro):\n";
    for(int i=0;i<r;i++) cin>>grid[i];
    int sr,sc, tr,tc; cout<<"Origen (r c): "; cin>>sr>>sc; cout<<"Destino (r c): "; cin>>tr>>tc;
    vector<vector<int>> dist(r, vector<int>(c, -1));
    queue<pair<int,int>> q; q.push({sr,sc}); dist[sr][sc]=0;
    int dr[4]={1,-1,0,0}, dc[4]={0,0,1,-1};
    while(!q.empty()){
        auto cur=q.front(); q.pop();
        for(int k=0;k<4;k++){
            int nr=cur.first+dr[k], nc=cur.second+dc[k];
            if(nr<0||nr>=r||nc<0||nc>=c) continue;
            if(grid[nr][nc]=='#' || dist[nr][nc]!=-1) continue;
            dist[nr][nc]=dist[cur.first][cur.second]+1;
            q.push({nr,nc});
        }
    }
    cout<<"Distancia: "<<dist[tr][tc]<<"\n";
    return 0;
}
