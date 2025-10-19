// Ejercicio 942 - Usar std::map para asociar nombres con edades
#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string,int> dic;
    dic["Ana"] = 25;
    dic["Luis"] = 30;
    dic["María"] = 22;
    for (auto &p : dic) cout << p.first << " -> " << p.second << "\n";
    return 0;
}
