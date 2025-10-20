#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    vector<int> binario;

    cout << "Ingrese un número entero: ";
    cin >> num;

    if (num == 0) {
        cout << "0" << endl;
        return 0;
    }

    while (num > 0) {
        binario.push_back(num % 2);
        num /= 2;
    }

    cout << "Representación binaria: ";
    for (int i = binario.size() - 1; i >= 0; i--) {
        cout << binario[i];
    }
    cout << endl;

    return 0;
}
