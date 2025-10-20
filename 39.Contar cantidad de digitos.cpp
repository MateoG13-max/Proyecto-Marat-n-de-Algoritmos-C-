/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
int main() {
    int n, contador = 0;
    std::cout << "Ingresa un número entero: ";
    std::cin >> n;

    if (n == 0) {
        contador = 1;  // El número 0 tiene 1 dígito.
    } else {
        while (n != 0) {
            n /= 10;
            contador++;
        }
    }

    std::cout << "El número tiene " << contador << " dígitos." << std::endl;
    return 0;
}


