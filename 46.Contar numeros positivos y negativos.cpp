/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
int main() {
    int numero;
    int positivos = 0, negativos = 0, ceros = 0;

    std::cout << "Ingresa números (0 para terminar): ";
    while (true) {
        std::cin >> numero;
        if (numero == 0) {
            break;
        } else if (numero > 0) {
            positivos++;
        } else {
            negativos++;
        }
    }

    std::cout << "Positivos: " << positivos << std::endl;
    std::cout << "Negativos: " << negativos << std::endl;
    std::cout << "Ceros: " << ceros << std::endl;

    return 0;
}



