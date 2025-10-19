#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    vector<vector<int>> grid(n,vector<int>(m));
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>grid[i][j];
    int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1},ans=0;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)if(grid[i][j]){
        ans++;queue<pair<int,int>>q;q.push({i,j});grid[i][j]=0;
        while(!q.empty()){
            auto[x,y]=q.front();q.pop();
            for(int d=0;d<4;d++){
                int nx=x+dx[d],ny=y+dy[d];
                if(nx>=0&&ny>=0&&nx<n&&ny<m&&grid[nx][ny]){
                    grid[nx][ny]=0;q.push({nx,ny});
                }
            }
        }
    }
    cout<<ans<<"\n";
}