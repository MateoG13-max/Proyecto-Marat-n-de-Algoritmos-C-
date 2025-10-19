#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, W, V;
    if(!(cin>>n>>W>>V)) return 0;
    vector<int> val(n), wt(n), vol(n);
    for(int i=0;i<n;i++) cin>>val[i]>>wt[i]>>vol[i];
    vector<vector<int>> dp(W+1, vector<int>(V+1, 0));
    for(int i=0;i<n;i++){
        for(int w=W; w>=wt[i]; --w){
            for(int v=V; v>=vol[i]; --v){
                dp[w][v] = max(dp[w][v], dp[w-wt[i]][v-vol[i]] + val[i]);
            }
        }
    }
    cout<<dp[W][V]<<"\n";
    return 0;
}