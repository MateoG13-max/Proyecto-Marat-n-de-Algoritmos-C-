#include <bits/stdc++.h>
using namespace std;
int binary_search_range(const vector<long long>& a, int l, int r, long long x){
    while(l<=r){
        int m = l + (r-l)/2;
        if(a[m]==x) return m;
        if(a[m]<x) l = m+1;
        else r = m-1;
    }
    return -1;
}
int exponential_search(const vector<long long>& a, long long x){
    int n = a.size();
    if(n==0) return -1;
    if(a[0]==x) return 0;
    int i=1;
    while(i<n && a[i] <= x) i <<= 1;
    return binary_search_range(a, i/2, min(i, n-1), x);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; long long x; cin>>n;
    vector<long long>a(n); for(int i=0;i<n;i++) cin>>a[i];
    cin>>x;
    cout<<exponential_search(a,x)<<"\n";
    return 0;
}
