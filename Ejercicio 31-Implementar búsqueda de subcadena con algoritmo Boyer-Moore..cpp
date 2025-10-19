#include <bits/stdc++.h>
using namespace std;
vector<int> bm_badchar(const string& text, const string& pat){
    int n=text.size(), m=pat.size();
    if(m==0) return {};
    vector<int> last(256, -1);
    for(int i=0;i<m;i++) last[(unsigned char)pat[i]] = i;
    vector<int> res;
    int s=0;
    while(s <= n-m){
        int j=m-1;
        while(j>=0 && pat[j]==text[s+j]) j--;
        if(j<0){ res.push_back(s); s += (s+m < n) ? m - last[(unsigned char)text[s+m]] : 1; }
        else s += max(1, j - last[(unsigned char)text[s+j]]);
    }
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string t,p; getline(cin,t); getline(cin,p);
    auto res = bm_badchar(t,p);
    for(int i:res) cout<<i<<" ";
    cout<<"\n";
    return 0;
}