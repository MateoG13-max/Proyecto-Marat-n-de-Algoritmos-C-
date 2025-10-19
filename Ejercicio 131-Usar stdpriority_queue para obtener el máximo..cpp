#include <bits/stdc++.h>
using namespace std;
int main() {
    deque<int> fila;
    fila.push_back(10);
    fila.push_back(20);
    fila.push_front(5);
    for (int x : fila) cout << x << " ";
}
