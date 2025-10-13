#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cuántos números: ";
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Número " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Duplicados: ";
    for (int i = 0; i < n; i++) cout << arr[i]*2 << " ";

    delete[] arr;
}

