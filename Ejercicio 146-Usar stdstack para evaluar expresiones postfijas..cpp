// Ejercicio 946 - Usar std::deque para insertar en ambos extremos
#include <bits/stdc++.h>
using namespace std;
int main() {
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(5);
    dq.push_back(15);
    dq.push_front(1);
    while (!dq.empty()) {
        cout << dq.front() << " "; dq.pop_front();
    }
    cout << "\n";
    return 0;
}