#include <bits/stdc++.h>
using namespace std;
int main() {
    multiset<int> datos;
    int n; while (cin >> n) datos.insert(n);
    for (auto x : datos) cout << x << " ";
}
