/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
int main() {
    int a, b, c;
    std::cout << "Ingresa tres números enteros: ";
    std::cin >> a >> b >> c;

    if (a >= b && a >= c) {
        std::cout << "El mayor número es: " << a << std::endl;
    } else if (b >= a && b >= c) {
        std::cout << "El mayor número es: " << b << std::endl;
    } else {
        std::cout << "El mayor número es: " << c << std::endl;
    }

    return 0;
}



