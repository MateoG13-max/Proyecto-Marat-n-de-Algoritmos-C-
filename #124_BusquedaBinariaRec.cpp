// Ejercicio 124 - Búsqueda binaria recursiva en array ordenado
#include <iostream>
#include <vector>
using namespace std;

int binsearch(const vector<int>& a, int lo, int hi, int target){
    if(lo>hi) return -1;
    int mid = lo + (hi-lo)/2;
    if(a[mid]==target) return mid;
    if(a[mid] > target) return binsearch(a, lo, mid-1, target);
    return binsearch(a, mid+1, hi, target);
}

int main(){
    int n; cout<<"Tamaño array ordenado: "; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int t; cout<<"Número a buscar: "; cin>>t;
    int pos = binsearch(a, 0, n-1, t);
    if(pos==-1) cout<<"No encontrado\n"; else cout<<"Encontrado en índice "<<pos<<"\n";
    return 0;
}
