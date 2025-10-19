#include <bits/stdc++.h>
using namespace std;
int fib_search(const vector<long long>& arr, long long x){
    int n=arr.size();
    int fibMm2=0, fibMm1=1, fibM = fibMm1 + fibMm2;
    while(fibM < n){ fibMm2 = fibMm1; fibMm1 = fibM; fibM = fibMm1 + fibMm2; }
    int offset = -1;
    while(fibM > 1){
        int i = min(offset + fibMm2, n-1);
        if(arr[i] < x){
            fibM = fibMm1; fibMm1 = fibMm2; fibMm2 = fibM - fibMm1;
            offset = i;
        } else if(arr[i] > x){
            fibM = fibMm2; fibMm1 = fibMm1 - fibMm2; fibMm2 = fibM - fibMm1;
        } else return i;
    }
    if(fibMm1 && offset+1 < n && arr[offset+1]==x) return offset+1;
    return -1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; long long x; cin>>n;
    vector<long long>a(n); for(int i=0;i<n;i++) cin>>a[i];
    cin>>x;
    cout<<fib_search(a,x)<<"\n";
    return 0;
}