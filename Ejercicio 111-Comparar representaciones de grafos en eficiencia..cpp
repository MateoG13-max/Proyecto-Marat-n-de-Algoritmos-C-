#include <bits/stdc++.h>
using namespace std;
template<typename T>
class Grafo {
    unordered_map<T, vector<T>> adj;
public:
    void agregar_arista(T u, T v, bool dirigido=false) {
        adj[u].push_back(v);
        if (!dirigido) adj[v].push_back(u);
    }
    void imprimir() {
        for (auto& [nodo, lista] : adj) {
            cout << nodo << ": ";
            for (auto& v : lista) cout << v << " ";
            cout << "\n";
        }
    }
};
int main() {
    Grafo<string> g;
    g.agregar_arista("A", "B");
    g.agregar_arista("A", "C");
    g.imprimir();
}