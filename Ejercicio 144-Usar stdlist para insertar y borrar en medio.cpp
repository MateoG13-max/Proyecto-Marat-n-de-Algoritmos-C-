// Ejercicio 944 - Usar std::multimap para asociar múltiples valores a una clave
#include <bits/stdc++.h>
using namespace std;
int main() {
    multimap<string,string> mm;
    mm.emplace("color","rojo");
    mm.emplace("color","azul");
    mm.emplace("tam","grande");
    auto range = mm.equal_range("color");
    cout << "Valores para 'color': ";
    for (auto it = range.first; it != range.second; ++it) cout << it->second << " ";
    cout << "\n";
    return 0;
}
