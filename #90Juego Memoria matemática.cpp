#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int n;
    cout << "¿Cuántos números deseas memorizar?: ";
    cin >> n;

    int* nums = new int[n];
    for (int i = 0; i < n; i++) {
        nums[i] = rand() % 50;
        cout << nums[i] << " ";
    }
    cout << "\nRecuerda los números...\nPresiona Enter para continuar.";
    cin.ignore(); cin.get();
    system("cls");

    int aciertos = 0;
    for (int i = 0; i < n; i++) {
        int r;
        cout << "Número #" << i + 1 << ": ";
        cin >> r;
        if (r == nums[i]) aciertos++;
    }

    cout << "Aciertos: " << aciertos << "/" << n << endl;
    delete[] nums;
}





