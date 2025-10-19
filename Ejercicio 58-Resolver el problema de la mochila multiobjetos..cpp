#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, W;
    if(!(cin>>n>>W)) return 0;
    vector<int> val(n), wt(n), cnt(n);
    for(int i=0;i<n;i++) cin>>val[i]>>wt[i]>>cnt[i];
    vector<int> dp(W+1, 0);
    for(int i=0;i<n;i++){
        int c = cnt[i];
        int k = 1;
        while(c > 0){
            int take = min(k, c);
            int weight = wt[i]*take;
            int value = val[i]*take;
            for(int w=W; w>=weight; --w)
                dp[w] = max(dp[w], dp[w-weight] + value);
            c -= take;
            k <<= 1;
        }
    }
    cout<<dp[W]<<"\n";
    return 0;
}