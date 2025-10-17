// Ejercicio 149 - QuickSort (Hoare partition)
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& a, int lo, int hi){
    int pivot = a[lo + (hi-lo)/2];
    int i=lo-1, j=hi+1;
    while(true){
        do{i++;} while(a[i]<pivot);
        do{j--;} while(a[j]>pivot);
        if(i>=j) return j;
        swap(a[i], a[j]);
    }
}

void quicksort(vector<int>& a, int lo, int hi){
    if(lo<hi){
        int p=partition(a,lo,hi);
        quicksort(a, lo, p);
        quicksort(a, p+1, hi);
    }
}

int main(){
    int n; cout<<"n: "; cin>>n;
    vector<int> a(n); for(int i=0;i<n;i++) cin>>a[i];
    quicksort(a,0,n-1);
    cout<<"Ordenado: "; for(auto v:a) cout<<v<<" "; cout<<"\n";
    return 0;
}
