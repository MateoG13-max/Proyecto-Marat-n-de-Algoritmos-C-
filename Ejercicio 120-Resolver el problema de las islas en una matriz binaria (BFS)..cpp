#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<vector<int>> grid;
int dx[4] = {1,-1,0,0}, dy[4]={0,0,1,-1};
void dfs(int x,int y){
    if(x<0||y<0||x>=n||y>=m||grid[x][y]==0)return;
    grid[x][y]=0;
    for(int d=0;d<4;d++)dfs(x+dx[d],y+dy[d]);
}
int main(){
    cin>>n>>m;
    grid.assign(n,vector<int>(m));
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>grid[i][j];
    int cnt=0;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)if(grid[i][j]){dfs(i,j);cnt++;}
    cout<<cnt<<"\n";
}