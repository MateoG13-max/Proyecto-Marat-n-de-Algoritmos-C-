#include <iostream>
using namespace std;

int main() {
    int* a = new int;
    int* b = new int;
    cout << "Ingresa dos números: ";
    cin >> *a >> *b;
    cout << "Suma = " << *a + *b << endl;
    delete a; delete b;
}
