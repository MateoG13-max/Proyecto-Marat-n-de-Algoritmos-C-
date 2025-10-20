/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
int main() {
    int n;
    std::cout << "Ingresa un número entero: ";
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << n << " es un número par." << std::endl;
    } else {
        std::cout << n << " es un número impar." << std::endl;
    }

    return 0;
}
