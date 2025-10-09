#include <iostream>
using namespace std;

int main() {
    double* metros = new double;
    cout << "Metros: ";
    cin >> *metros;

    cout << "En centímetros: " << *metros * 100 << " cm\n";
    cout << "En milímetros: " << *metros * 1000 << " mm\n";
    delete metros;
}

