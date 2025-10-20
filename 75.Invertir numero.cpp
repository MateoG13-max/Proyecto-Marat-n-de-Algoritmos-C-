/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
int main() {
    int n, invertido = 0;
    std::cout << "Ingresa un número entero: ";
    std::cin >> n;

    while (n != 0) {
        invertido = invertido * 10 + (n % 10);
        n /= 10;
    }

    std::cout << "El número invertido es: " << invertido << std::endl;
    return 0;
}

