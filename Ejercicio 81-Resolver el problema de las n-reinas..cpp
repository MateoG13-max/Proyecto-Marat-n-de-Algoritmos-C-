#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> col;
vector<char> usedCol, diag1, diag2;
bool solve(int r){
    if(r==n) return true;
    for(int c=0;c<n;c++){
        if(usedCol[c] || diag1[r+c] || diag2[r-c+n-1]) continue;
        col[r]=c; usedCol[c]=diag1[r+c]=diag2[r-c+n-1]=1;
        if(solve(r+1)) return true;
        usedCol[c]=diag1[r+c]=diag2[r-c+n-1]=0;
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    if(!(cin>>n)) return 0;
    col.assign(n,-1);
    usedCol.assign(n,0);
    diag1.assign(2*n,0);
    diag2.assign(2*n,0);
    if(solve(0)){
        for(int i=0;i<n;i++) cout<<col[i]<<(i+1==n?'\n':' ');
    } else cout<<"NO HAY SOLUCION\n";
    return 0;
}