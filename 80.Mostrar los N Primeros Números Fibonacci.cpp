/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
int main() {
    int n;
    std::cout << "Ingresa un número entero positivo: ";
    std::cin >> n;

    int a = 0, b = 1;

    std::cout << "Los primeros " << n << " números de Fibonacci son: ";
    for (int i = 1; i <= n; ++i) {
        std::cout << a << " ";
        int temp = a;
        a = b;
        b = temp + b;
    }
    std::cout << std::endl;

    return 0;
}


