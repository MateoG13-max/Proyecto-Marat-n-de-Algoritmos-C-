#include <bits/stdc++.h>
using namespace std;
#include <chrono>
int linear_search(const vector<long long>& a, long long x){
    for(size_t i=0;i<a.size();++i) if(a[i]==x) return i;
    return -1;
}
int binary_search_idx(const vector<long long>& a, long long x){
    int l=0, r=a.size()-1;
    while(l<=r){ int m=l+(r-l)/2; if(a[m]==x) return m; if(a[m]<x) l=m+1; else r=m-1; }
    return -1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; long long x; cin>>n; vector<long long>a(n); for(int i=0;i<n;i++) cin>>a[i]; cin>>x;
    using clk = chrono::high_resolution_clock;
    auto t1 = clk::now(); linear_search(a,x); auto t2 = clk::now();
    auto t3 = clk::now(); binary_search_idx(a,x); auto t4 = clk::now();
    auto dt_lin = chrono::duration_cast<chrono::microseconds>(t2-t1).count();
    auto dt_bin = chrono::duration_cast<chrono::microseconds>(t4-t3).count();
    cout<<"Linear (us): "<<dt_lin<<"\nBinary (us): "<<dt_bin<<"\n";
    return 0;
}