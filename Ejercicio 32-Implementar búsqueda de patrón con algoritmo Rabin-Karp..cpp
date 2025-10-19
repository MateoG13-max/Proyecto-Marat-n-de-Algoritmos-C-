#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
vector<int> rabin_karp(const string& txt, const string& pat){
    vector<int> res;
    int n=txt.size(), m=pat.size();
    if(m==0) return res;
    const ull base = 1315423911ULL; // large base for rolling
    ull pat_hash=0, cur_hash=0, power=1;
    for(int i=0;i<m;i++){ pat_hash = pat_hash*256 + (unsigned char)pat[i]; cur_hash = cur_hash*256 + (unsigned char)txt[i]; if(i) power *= 256; }
    if(pat_hash==cur_hash && txt.substr(0,m)==pat) res.push_back(0);
    for(int i=m;i<n;i++){
        cur_hash = cur_hash - (ull)(unsigned char)txt[i-m] * power;
        cur_hash = cur_hash*256 + (unsigned char)txt[i];
        if(cur_hash==pat_hash){
            if(txt.substr(i-m+1,m)==pat) res.push_back(i-m+1);
        }
    }
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string t,p; getline(cin,t); getline(cin,p);
    auto r = rabin_karp(t,p);
    for(int i:r) cout<<i<<" ";
    cout<<"\n";
    return 0;
}