/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() 
{
    double numero1;
    double numero2;
    double numero3;
    
  std::cout << "Ingrese un numero" << std::endl;
  std::cin>> numero1;
  std::cout << "Ingrese otro numero" << std::endl;
  std::cin>> numero2;
  std::cout << "Ingrese otro numero" << std::endl;
  std::cin>> numero3;
  
  if(numero1 > numero2 && numero1 > numero3)
      std::cout << "El numero mayor es:" <<numero1  <<std::endl;
  else
        if(numero2 > numero1 && numero2 > numero3)
            std::cout << "El numero mayor es: " <<numero2 <<std::endl;
        else
            if(numero3 > numero2 && numero3 > numero1)
            std::cout << "El numero mayor es: " <<numero3 <<std::endl;
return 0;
}
  
  
    
