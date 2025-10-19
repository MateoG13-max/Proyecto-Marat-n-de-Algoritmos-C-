#include <bits/stdc++.h>
using namespace std;
bool better(const string &A, const string &B){
    if(A.size() != B.size()) return A.size() > B.size();
    return A > B;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    if(!(cin>>s)) return 0;
    int n = (int)s.size();
    vector<string> dp(n+1, "");
    for(int i=n-1;i>=0;i--){
        string best = dp[i+1];
        string take = s.substr(i,1) + dp[i+1];
        if(better(take, best)) best = take;
        dp[i] = best;
    }
    if(dp[0].empty()) cout<<"0\n"; else cout<<dp[0]<<"\n";
    return 0;
}