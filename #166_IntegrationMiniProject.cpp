// Ejercicio 166 - Proyecto integrador mini: combinar inventario + persistence + alertas
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
struct Item{ string name; int qty; int threshold; };
int main(){
    vector<Item> items;
    items.push_back({"lapiz",5,3});
    items.push_back({"cuaderno",2,5});
    // guardar estado
    ofstream out("inventory_state.dat", ios::binary);
    int n = items.size(); out.write((char*)&n, sizeof(n));
    for(auto &it: items){
        int l = it.name.size(); out.write((char*)&l,sizeof(l)); out.write(it.name.data(),l);
        out.write((char*)&it.qty,sizeof(it.qty)); out.write((char*)&it.threshold,sizeof(it.threshold));
    }
    out.close(); cout<<"Estado guardado. Revisando alertas:\n";
    for(auto &it: items) if(it.qty < it.threshold) cout<<it.name<<" needs restock\n";
    return 0;
}
