#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 1000;
    vector<vector<int>> lista(n);
    vector<vector<int>> matriz(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (rand() % 100 < 2) {
                lista[i].push_back(j);
                matriz[i][j] = 1;
            }
    cout << "Lista adyacencia lista con " << n << " nodos creada.\n";
    cout << "Matriz de adyacencia creada.\n";
}