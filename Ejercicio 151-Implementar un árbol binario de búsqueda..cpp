// Ejercicio 951 - Usar std::unordered_map para implementar una tabla hash (conteo)
#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> table;
    string s; while(cin>>s) table[s]++;
    for(auto &p:table) cout<<p.first<<" -> "<<p.second<<"\n";
    return 0;
}
