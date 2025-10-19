#include <bits/stdc++.h>
using namespace std;
int main() {
    list<int> cola;
    int n;
    while (cin >> n) cola.push_back(n);
    while (!cola.empty()) {
        cout << cola.front() << " ";
        cola.pop_front();
    }
}
