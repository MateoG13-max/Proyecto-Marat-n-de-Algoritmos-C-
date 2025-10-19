#include <bits/stdc++.h>
using namespace std;
int main() {
    string texto; cin >> texto;
    stack<char> pila;
    for (char c : texto) pila.push(c);
    while (!pila.empty()) {
        cout << pila.top();
        pila.pop();
    }
}
