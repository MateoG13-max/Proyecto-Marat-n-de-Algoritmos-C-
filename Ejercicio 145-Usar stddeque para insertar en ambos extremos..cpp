// Ejercicio 945 - Usar std::list para insertar y borrar en medio
#include <bits/stdc++.h>
using namespace std;
int main() {
    list<int> L = {1,2,3,4,5};
    auto it = L.begin(); advance(it, 2); // apunta al 3
    L.insert(it, 99); // 1,2,99,3,4,5
    it = find(L.begin(), L.end(), 3);
    if (it!=L.end()) L.erase(it); // borra 3
    for (int x : L) cout << x << " ";
    cout << "\n";
    return 0;
}
