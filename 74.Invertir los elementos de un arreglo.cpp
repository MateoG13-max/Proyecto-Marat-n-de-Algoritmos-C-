/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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

    // invertir
    int i = 0, j = N - 1;
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    cout << "Arreglo invertido: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
