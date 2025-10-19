#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<vector<int>> reach(n, vector<int>(n));
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>reach[i][j];
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            if(!reach[i][k]) continue;
            for(int j=0;j<n;j++){
                if(reach[k][j]) reach[i][j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<reach[i][j]<<(j+1==n?'\n':' ');
        }
    }
    return 0;
}