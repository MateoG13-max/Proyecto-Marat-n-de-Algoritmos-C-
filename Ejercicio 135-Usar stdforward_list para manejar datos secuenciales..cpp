#include <bits/stdc++.h>
using namespace std;
int main() {
    queue<string> banco;
    banco.push("Carlos");
    banco.push("María");
    banco.push("Ana");
    while (!banco.empty()) {
        cout << "Atendiendo a " << banco.front() << "\n";
        banco.pop();
    }
}
