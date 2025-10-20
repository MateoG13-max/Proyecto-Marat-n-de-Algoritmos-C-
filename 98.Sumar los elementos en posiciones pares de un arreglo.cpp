#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Ingrese número de elementos: ";
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> arr[i];
    }

    int sumaPares = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            sumaPares += arr[i-1];  // i-1 para índice 0-based
        }
    }

    cout << "La suma de elementos en posiciones pares es: " << sumaPares << endl;
    return 0;
}
