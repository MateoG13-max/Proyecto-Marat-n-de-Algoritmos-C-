#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> arr[i];
    }

    if (N > 1) {
        int ultimo = arr[N-1];
        for (int i = N-1; i > 0; i--) {
            arr[i] = arr[i-1];
        }
        arr[0] = ultimo;
    }

    cout << "Arreglo tras rotación: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
