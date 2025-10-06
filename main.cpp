/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream> // Incluye la librería estándar de entrada y salida (iostream)


int main() { // Comienza la función principal del programa

    // Imprime el primer mensaje en la consola
    std::cout << "Hello World" << std::endl; // std::cout es para salida, y std::endl agrega un salto de línea

    // Imprime el segundo mensaje en la consola
    std::cout << "Ahora vamos a hacer una suma." << std::endl; // Imprime el mensaje explicativo de la suma

    // Declaramos las variables para almacenar los dos números que el usuario ingrese y el resultado de la suma
    int a, b, c, d, e; // num1 y num2 son los números ingresados, suma guardará el resultado

    // Solicita al usuario que ingrese el primer número
    std::cout << "Ingresa el primer número: "; // Mensaje para pedir el primer número
    std::cin >> a; // std::cin toma la entrada del usuario y la guarda en num1

    // Solicita al usuario que ingrese el segundo número
    std::cout << "Ingresa el segundo número: "; // Mensaje para pedir el segundo número
    std::cin >> b; // std::cin toma la entrada del usuario y la guarda en num2

    // Realiza la suma de los dos números ingresados
    c = a + b; // La variable suma almacena la suma de num1 y num2

    // Muestra el resultado de la suma en la pantalla
    std::cout << "La suma de " << a << " y " << b << " es: " << c << std::endl; // Imprime el resultado de la suma

   std::cout << "Ahora la multiplicacion"; 
 
   d = a*b;
   std::cout << "La multiplicacion de " << a << " y " << b << " es: " << d << std::endl;
   
   std::cout << "Ahora la divicion";
 
    e = a/b;
   
 std::cout << "La divicion de " << a << " y " << b << " es: " << e << std::endl;
   


    return 0; // Devuelve 0, indicando que el programa terminó correctamente
}
