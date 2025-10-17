// Ejercicio 148 - Merge sort sobre vector de enteros
#include <iostream>
#include <vector>
using namespace std;

void merge_sort(vector<int>& a, int l, int r){
    if(r-l<=1) return;
    int m=(l+r)/2;
    merge_sort(a,l,m); merge_sort(a,m,r);
    vector<int> tmp; tmp.reserve(r-l);
    int i=l,j=m;
    while(i<m || j<r){
        if(j==r || (i<m && a[i]<=a[j])) tmp.push_back(a[i++]);
        else tmp.push_back(a[j++]);
    }
    for(int k=l;k<r;k++) a[k]=tmp[k-l];
}

int main(){
    int n; cout<<"n: "; cin>>n;
    vector<int> a(n); for(int i=0;i<n;i++) cin>>a[i];
    merge_sort(a,0,n);
    cout<<"Ordenado: "; for(auto v:a) cout<<v<<" "; cout<<"\n";
    return 0;
}
