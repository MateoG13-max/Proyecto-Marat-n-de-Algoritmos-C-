#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (1LL<<50);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<vector<ll>> dist(n, vector<ll>(n, INF));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            long long x; cin>>x;
            if(x==-1) continue;
            dist[i][j]=x;
        }
        dist[i][i]=min(dist[i][i], 0LL);
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            if(dist[i][k]==INF) continue;
            for(int j=0;j<n;j++){
                if(dist[k][j]==INF) continue;
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dist[i][j]>=INF/4) cout<<-1;
            else cout<<dist[i][j];
            cout<<(j+1==n?'\n':' ');
        }
    }
    return 0;
}