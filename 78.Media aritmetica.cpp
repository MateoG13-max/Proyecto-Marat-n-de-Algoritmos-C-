/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
int main() {
    int n;
    double suma = 0.0;
    std::cout << "Ingresa el número de elementos: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        double num;
        std::cout << "Ingresa el número " << i << ": ";
        std::cin >> num;
        suma += num;
    }

    double media = suma / n;
    std::cout << "La media aritmética es: " << media << std::endl;
    return 0;
}
