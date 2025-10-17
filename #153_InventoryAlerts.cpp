// Ejercicio 153 - Inventario con alerta de reabastecimiento
#include <iostream>
#include <vector>
using namespace std;

struct Item{ string name; int qty; int threshold; };
int main(){
    int n; cout<<"Cuántos productos?: "; cin>>n;
    vector<Item> items(n);
    for(int i=0;i<n;i++) cin>>items[i].name>>items[i].qty>>items[i].threshold;
    cout<<"Checando alertas:\n";
    for(auto &it: items) if(it.qty < it.threshold) cout<<it.name<<" necesita reabastecer (qty="<<it.qty<<")\n";
    return 0;
}
