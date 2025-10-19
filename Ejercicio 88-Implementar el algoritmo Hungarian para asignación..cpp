#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<vector<ll>> a(n+1, vector<ll>(n+1));
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin>>a[i][j];
    vector<ll> u(n+1,0), v(n+1,0);
    vector<int> p(n+1,0), way(n+1,0);
    for(int i=1;i<=n;i++){
        p[0]=i;
        int j0=0;
        vector<ll> minv(n+1, (ll)1e18);
        vector<char> used(n+1,false);
        do{
            used[j0]=true;
            int i0 = p[j0], j1=0;
            ll delta = (ll)1e18;
            for(int j=1;j<=n;j++) if(!used[j]){
                ll cur = a[i0][j]-u[i0]-v[j];
                if(cur<minv[j]) { minv[j]=cur; way[j]=j0; }
                if(minv[j]<delta){ delta=minv[j]; j1=j; }
            }
            for(int j=0;j<=n;j++){
                if(used[j]) { u[p[j]] += delta; v[j] -= delta; }
                else minv[j] -= delta;
            }
            j0=j1;
        } while(p[j0]!=0);
        do{
            int j1 = way[j0];
            p[j0] = p[j1];
            j0 = j1;
        } while(j0!=0);
    }
    vector<int> matchL(n+1,0);
    for(int j=1;j<=n;j++) matchL[p[j]] = j;
    ll cost = -v[0];
    cout<<cost<<"\n";
    for(int i=1;i<=n;i++) cout<<i-1<<" "<<matchL[i]-1<<"\n";
    return 0;
}