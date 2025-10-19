#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; long long target; cin>>n>>target;
    vector<long long>a(n); for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(), a.end());
    for(int i=0;i<n;i++){
        if(i>0 && a[i]==a[i-1]) continue;
        int l=i+1, r=n-1;
        while(l<r){
            long long s = a[i]+a[l]+a[r];
            if(s==target){ cout<<a[i]<<" "<<a[l]<<" "<<a[r]<<"\n"; l++; r--; }
            else if(s<target) l++; else r--;
        }
    }
    return 0;
}