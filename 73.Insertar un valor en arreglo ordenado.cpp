#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Ingrese cantidad de elementos (ordenados): ";
    cin >> N;
    vector<int> arr(N + 1);

    cout << "Ingrese los " << N << " elementos ordenados: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Ingrese valor a insertar: ";
    cin >> x;

    // encontrar posición de inserción
    int i;
    for (i = 0; i < N; i++) {
        if (arr[i] > x) break;
    }
    // i es posición donde insertar

    // desplazar desde el final
    for (int j = N; j > i; j--) {
        arr[j] = arr[j-1];
    }
    arr[i] = x;

    cout << "Arreglo con valor insertado: ";
    for (int k = 0; k <= N; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}
