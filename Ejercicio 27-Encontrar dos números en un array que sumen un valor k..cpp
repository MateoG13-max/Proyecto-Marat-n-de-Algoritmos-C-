#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; long long k; cin>>n>>k;
    vector<long long>a(n); for(int i=0;i<n;i++) cin>>a[i];
    unordered_map<long long,int> mp;
    for(int i=0;i<n;i++){
        long long need = k - a[i];
        if(mp.count(need)){
            cout<<mp[need]<<" "<<i<<"\n";
            return 0;
        }
        mp[a[i]] = i;
    }
    cout<<"-1 -1\n";
    return 0;
}