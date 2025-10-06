/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
double Base;
double Altura;
double Area;

std::cout << "Ingrese la Base del Triangulo" << std::endl;
std::cin >> Base;
std::cout << "Ingrese la Altura del Triangulo" << std::endl;
std::cin >> Altura;

Area=(Base*Altura)/2;

std::cout << "El Area del Trianguloes: " <<Area <<std::endl;

    return 0;
}
