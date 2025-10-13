#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int n;
    cout << "Cuántos números memorizarás: ";
    cin >> n;
    int* numeros = new int[n];
    for (int i = 0; i < n; i++) numeros[i] = rand() % 100;
    
    cout << "Recuerda estos números:\n";
    for (int i = 0; i < n; i++) cout << numeros[i] << " ";
    cout << "\nPresiona Enter para continuar...";
    cin.ignore(); cin.get();

    system("cls"); // limpia pantalla (en Windows)
    int aciertos = 0;
    for (int i = 0; i < n; i++) {
        int r;
        cout << "Número #" << i+1 << ": ";
        cin >> r;
        if (r == numeros[i]) aciertos++;
    }

    cout << "Aciertos: " << aciertos << "/" << n << endl;
    delete[] numeros;
}
