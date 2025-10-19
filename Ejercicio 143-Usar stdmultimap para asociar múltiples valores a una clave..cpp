// Ejercicio 943 - Usar std::unordered_set para verificar duplicados
#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_set<int> s;
    vector<int> a = {1,2,3,2,4,5,1};
    for (int x : a) {
        if (s.count(x)) cout << "Duplicado: " << x << "\n";
        else s.insert(x);
    }
    return 0;
}
