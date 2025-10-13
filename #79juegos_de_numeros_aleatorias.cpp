#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int *nums = new int[5];
    cout << "Memoriza estos 5 números:\n";
    for (int i = 0; i < 5; i++) {
        nums[i] = rand() % 90 + 10;
        cout << nums[i] << " ";
    }
    cout << "\nAhora escribe el primer número que viste: ";
    int ans;
    cin >> ans;
    cout << (ans == nums[0] ? "¡Correcto!" : "Incorrecto") << endl;
    delete[] nums;
}

