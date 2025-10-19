#include <bits/stdc++.h>
using namespace std;
using clk = chrono::high_resolution_clock;
void insertion(vector<int>a){ for(int i=1;i<a.size();i++){int key=a[i];int j=i-1;while(j>=0&&a[j]>key){a[j+1]=a[j];j--;}a[j+1]=key;}}
void selection(vector<int>a){int n=a.size();for(int i=0;i<n-1;i++){int mi=i;for(int j=i+1;j<n;j++)if(a[j]<a[mi])mi=j;swap(a[i],a[mi]);}}
void bubble(vector<int>a){int n=a.size();bool s;for(int i=0;i<n-1;i++){s=false;for(int j=0;j<n-i-1;j++)if(a[j]>a[j+1]){swap(a[j],a[j+1]);s=true;}if(!s)break;}}
void shell(vector<int>a){int n=a.size();for(int g=n/2;g>0;g/=2)for(int i=g;i<n;i++){int t=a[i];int j=i;for(;j>=g&&a[j-g]>t;j-=g)a[j]=a[j-g];a[j]=t;}}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n; vector<int>a(n);
    for(int&i:a)cin>>i;
    vector<pair<string,void(*)(vector<int>)>>algos={{"insertion",insertion},{"selection",selection},{"bubble",bubble},{"shell",shell}};
    for(auto &[name,f]:algos){
        auto start=clk::now(); f(a); auto end=clk::now();
        cout<<name<<": "<<chrono::duration_cast<chrono::microseconds>(end-start).count()<<" us\n";
    }
}