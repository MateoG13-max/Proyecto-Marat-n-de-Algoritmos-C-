#include <bits/stdc++.h>
using namespace std;
struct Persona {
    string nombre;
    int edad;
};
int main() {
    vector<Persona> personas = {{"Ana", 22}, {"Luis", 30}, {"Carlos", 25}};
    sort(personas.begin(), personas.end(), [](auto& a, auto& b){ return a.edad < b.edad; });
    for (auto& p : personas) cout << p.nombre << " (" << p.edad << ")\n";
}