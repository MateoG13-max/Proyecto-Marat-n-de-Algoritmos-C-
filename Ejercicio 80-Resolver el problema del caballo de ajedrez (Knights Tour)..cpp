#include <bits/stdc++.h>
using namespace std;
int N;
vector<int> dx = {2,1,-1,-2,-2,-1,1,2};
vector<int> dy = {1,2,2,1,-1,-2,-2,-1};
bool inside(int x,int y){ return x>=0 && y>=0 && x<N && y<N; }
int deg(const vector<vector<int>>& used, int x,int y){
    int c=0;
    for(int k=0;k<8;k++){
        int nx=x+dx[k], ny=y+dy[k];
        if(inside(nx,ny) && !used[nx][ny]) ++c;
    }
    return c;
}
bool knights_tour(int sx,int sy, vector<pair<int,int>>& path){
    vector<vector<int>> used(N, vector<int>(N,0));
    path.clear();
    path.emplace_back(sx,sy);
    used[sx][sy]=1;
    for(int step=1; step<N*N; ++step){
        int x = path.back().first, y = path.back().second;
        vector<tuple<int,int,int>> cand;
        for(int k=0;k<8;k++){
            int nx=x+dx[k], ny=y+dy[k];
            if(inside(nx,ny) && !used[nx][ny]){
                cand.emplace_back(deg(used,nx,ny), nx, ny);
            }
        }
        if(cand.empty()) return false;
        sort(cand.begin(), cand.end());
        bool moved=false;
        for(auto &t: cand){
            int nx = get<1>(t), ny = get<2>(t);
            used[nx][ny]=1;
            path.emplace_back(nx,ny);
            moved=true;
            break;
        }
        if(!moved) return false;
    }
    return (int)path.size() == N*N;
}
bool backtrackDFS(int x,int y, vector<vector<int>>& used, vector<pair<int,int>>& path){
    if((int)path.size() == N*N) return true;
    vector<pair<int,pair<int,int>>> cand;
    for(int k=0;k<8;k++){
        int nx=x+dx[k], ny=y+dy[k];
        if(inside(nx,ny) && !used[nx][ny]){
            cand.push_back({deg(used,nx,ny), {nx,ny}});
        }
    }
    sort(cand.begin(), cand.end());
    for(auto &c: cand){
        int nx = c.second.first, ny = c.second.second;
        used[nx][ny]=1;
        path.emplace_back(nx,ny);
        if(backtrackDFS(nx,ny,used,path)) return true;
        path.pop_back();
        used[nx][ny]=0;
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int sx, sy;
    if(!(cin>>N>>sx>>sy)) return 0;
    vector<pair<int,int>> path;
    if(knights_tour(sx,sy,path)){
        for(auto &p: path) cout<<p.first<<" "<<p.second<<"\n";
        return 0;
    }
    vector<vector<int>> used(N, vector<int>(N,0));
    used[sx][sy]=1;
    vector<pair<int,int>> path2; path2.emplace_back(sx,sy);
    bool ok = backtrackDFS(sx,sy,used,path2);
    if(ok){
        for(auto &p: path2) cout<<p.first<<" "<<p.second<<"\n";
    } else {
        cout<<"NO SOLUTION\n";
    }
    return 0;
}