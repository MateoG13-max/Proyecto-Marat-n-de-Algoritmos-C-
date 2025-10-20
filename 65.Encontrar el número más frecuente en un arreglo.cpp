#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Ingrese cantidad de elementos: ";
    cin >> N;

    if (N <= 0) {
        cout << "Cantidad inválida." << endl;
        return 0;
    }

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> arr[i];
    }

    int maxFreq = 0;
    int valorFrecuente = arr[0];

    for (int i = 0; i < N; i++) {
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (arr[j] == arr[i]) count++;
        }
        if (count > maxFreq) {
            maxFreq = count;
            valorFrecuente = arr[i];
        }
    }

    cout << "El valor más frecuente es: " << valorFrecuente << " (se repite " << maxFreq << " veces)" << endl;
    return 0;
}
