/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
int main() {
    int n;
    std::cout << "Ingresa el tamaño del arreglo: ";
    std::cin >> n;

    int arr[n], suma = 0;

    for (int i = 0; i < n; ++i) {
        std::cout << "Ingresa el número " << i + 1 << ": ";
        std::cin >> arr[i];
        suma += arr[i];
    }

    std::cout << "La suma de los elementos es: " << suma << std::endl;
    return 0;
}




