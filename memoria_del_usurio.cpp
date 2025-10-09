#include <iostream>
#include <string>
using namespace std;

int main() {
    string* nombre = new string;
    cout << "¿Cuál es tu nombre? ";
    getline(cin, *nombre);

    cout << "Hola " << *nombre << ", ¡te recordaré por siempre! 😉" << endl;
    delete nombre;
}
