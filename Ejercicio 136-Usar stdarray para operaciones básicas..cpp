#include <bits/stdc++.h>
using namespace std;
int main() {
    forward_list<int> lista = {1, 2, 3, 4, 5};
    lista.remove(3);
    for (int x : lista) cout << x << " ";
}
