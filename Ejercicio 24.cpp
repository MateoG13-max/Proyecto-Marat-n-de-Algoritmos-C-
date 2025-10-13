#include <bits/stdc++.h>
using namespace std;
int jump_search(const vector<long long>& a, long long x){
    int n=a.size();
    if(n==0) return -1;
    int step = max(1,(int)sqrt(n));
    int prev = 0;
    while(prev < n && a[min(n-1, prev+step-1)] < x) prev += step;
    int end = min(n-1, prev+step-1);
    for(int i = max(0, prev-step); i<=end; ++i) if(a[i]==x) return i;
    return -1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; long long x; cin>>n;
    vector<long long>a(n); for(int i=0;i<n;i++) cin>>a[i];
    cin>>x;
    cout<<jump_search(a,x)<<"\n";
    return 0;
}
