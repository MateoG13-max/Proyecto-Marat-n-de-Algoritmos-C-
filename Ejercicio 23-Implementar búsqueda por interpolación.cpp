#include <bits/stdc++.h>
using namespace std;
int interpolation_search(const vector<long long>& a, long long x){
    int lo=0, hi=(int)a.size()-1;
    while(lo<=hi && x>=a[lo] && x<=a[hi]){
        if(lo==hi) return (a[lo]==x)? lo : -1;
        long long pos = lo + ( (hi-lo) * (x - a[lo]) ) / (a[hi] - a[lo]);
        if(pos < lo || pos > hi) break;
        if(a[pos]==x) return (int)pos;
        if(a[pos] < x) lo = pos+1; else hi = pos-1;
    }
    return -1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; long long x; cin>>n;
    vector<long long>a(n); for(int i=0;i<n;i++) cin>>a[i];
    cin>>x;
    cout<<interpolation_search(a,x)<<"\n";
    return 0;
}
