/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main() 
{
  double numero1;
  double numero2;
  
  std::cout << "Ingrese un numero" << std::endl;
  std::cin>> numero1;
  std::cout << "Ingrese un numero" << std::endl;
  std::cin>> numero2;
  
  double salida= numero1 + numero2;
  
  std::cout << "La suma es:" <<salida  <<std::endl;



}
