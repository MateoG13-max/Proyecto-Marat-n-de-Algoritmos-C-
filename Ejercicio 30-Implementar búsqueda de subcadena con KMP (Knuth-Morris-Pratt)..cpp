#include <bits/stdc++.h>
using namespace std;
vector<int> build_lps(const string& pat){
    int m=pat.size(); vector<int> lps(m,0);
    int len=0, i=1;
    while(i<m){
        if(pat[i]==pat[len]) lps[i++]=++len;
        else if(len) len=lps[len-1];
        else lps[i++]=0;
    }
    return lps;
}
vector<int> kmp_search(const string& t, const string& p){
    vector<int> res; if(p.empty()) return res;
    auto lps = build_lps(p);
    int i=0,j=0, n=t.size(), m=p.size();
    while(i<n){
        if(t[i]==p[j]){ i++; j++; }
        if(j==m){ res.push_back(i-j); j=lps[j-1]; }
        else if(i<n && t[i]!=p[j]){ if(j) j=lps[j-1]; else i++; }
    }
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string t,p; getline(cin,t); getline(cin,p);
    auto r = kmp_search(t,p);
    for(int i:r) cout<<i<<" ";
    cout<<"\n";
    return 0;
}