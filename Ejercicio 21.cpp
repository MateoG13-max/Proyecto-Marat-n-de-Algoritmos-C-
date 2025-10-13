#include <bits/stdc++.h>
using namespace std;
int ternary_search(const vector<long long>& a, long long x){
    int l=0, r=(int)a.size()-1;
    while(l<=r){
        int t = (r-l)/3;
        int m1 = l + t;
        int m2 = r - t;
        if(a[m1]==x) return m1;
        if(a[m2]==x) return m2;
        if(x < a[m1]) r = m1 - 1;
        else if(x > a[m2]) l = m2 + 1;
        else { l = m1 + 1; r = m2 - 1; }
    }
    return -1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; long long x; cin>>n;
    vector<long long>a(n); for(int i=0;i<n;i++) cin>>a[i];
    cin>>x;
    cout<<ternary_search(a,x)<<"\n";
    return 0;

}
