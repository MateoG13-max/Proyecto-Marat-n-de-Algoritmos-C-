#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<string, int> frecuencia;
    string palabra;
    while (cin >> palabra) frecuencia[palabra]++;
    for (auto& [p, c] : frecuencia) cout << p << ": " << c << "\n";
}