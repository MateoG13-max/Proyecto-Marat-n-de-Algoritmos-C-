#include <bits/stdc++.h>
using namespace std;
int main() {
    map<int, string> mapa;
    mapa[3] = "C";
    mapa[1] = "A";
    mapa[2] = "B";
    for (auto& [k, v] : mapa) cout << k << " -> " << v << "\n";
}
