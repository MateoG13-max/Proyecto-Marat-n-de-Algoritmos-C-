#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_set<int> numeros;
    int n; while (cin >> n) numeros.insert(n);
    for (int x : numeros) cout << x << " ";
}
