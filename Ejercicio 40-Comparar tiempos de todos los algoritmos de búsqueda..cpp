#include <bits/stdc++.h>
using namespace std;
using clk = chrono::high_resolution_clock;
int linear(const vector<int>&a,int x){for(int i=0;i<a.size();i++)if(a[i]==x)return i;return -1;}
int binary(const vector<int>&a,int x){int l=0,r=a.size()-1;while(l<=r){int m=l+(r-l)/2;if(a[m]==x)return m;if(a[m]<x)l=m+1;else r=m-1;}return -1;}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x; cin>>n; vector<int>a(n); for(int&i:a)cin>>i; cin>>x;
    sort(a.begin(),a.end());
    auto s1=clk::now(); linear(a,x); auto e1=clk::now();
    auto s2=clk::now(); binary(a,x); auto e2=clk::now();
    cout<<"Linear: "<<chrono::duration_cast<chrono::microseconds>(e1-s1).count()<<" us\n";
    cout<<"Binary: "<<chrono::duration_cast<chrono::microseconds>(e2-s2).count()<<" us\n";
}