#include <bits/stdc++.h>
using namespace std;
vector<int> naive_find(const string& t, const string& p){
    vector<int> pos; int n=t.size(), m=p.size();
    for(int i=0;i+ m<=n;i++){
        int j=0; while(j<m && t[i+j]==p[j]) j++;
        if(j==m) pos.push_back(i);
    }
    return pos;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string text, pat;
    getline(cin, text);
    getline(cin, pat);
    auto res = naive_find(text, pat);
    for(int i:res) cout<<i<<" ";
    cout<<"\n";
    return 0;
}
