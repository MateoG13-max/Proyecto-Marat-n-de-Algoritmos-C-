#include <iostream>
using namespace std;

int main() {
    int* num = new int;
    cout << "Introduce un número: ";
    cin >> *num;

    cout << ((*num % 2 == 0) ? "Es par" : "Es impar") << endl;
    delete num;
}
