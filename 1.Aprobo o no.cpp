/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream> // Incluye la biblioteca estandar de entrada y salida para usar std::cout y std::cin.
int main() { // La funciC3n principal donde comienza la ejecuciC3n del programa.
	double calificacion; // Declara una variable de tipo double para almacenar la calificacion, permitiendo decimales.
	// Inicia un bucle do-while para solicitar la calificaciC3n y validarla.
	// El bucle se ejecutarC! al menos una vez y se repetirC! si la calificaciC3n no es vC!lida.
	do {
		// Muestra un mensaje en la consola pidiendo al usuario que ingrese la calificaciC3n.
		std::cout << "Ingrese la calificacion del estudiante (de 0 a 10): ";
		std::cin >> calificacion; // Lee el valor ingresado por el usuario y lo guarda en la variable 'calificacion'.
		// Verifica si la calificaciC3n ingresada estC! fuera del rango [0, 10].
		if (calificacion < 0 || calificacion > 10) {
			// Si la calificaciC3n es invC!lida, muestra un mensaje de error.
			std::cout << "Calificacion no valida. Por favor, ingrese un valor entre 0 y 10." << std::endl;
		}
	} while (calificacion < 0 || calificacion > 10); // La condicion del bucle: si la calificacion es menor que 0 o mayor que 10, el bucle se repite.
	// A partir de aqui, la calificaciC3n es vC!lida y se procede a su evaluaciC3n.

	// Comienza la estructura de decision if-else if-else para determinar el estado del estudiante.
	if (calificacion >= 7.0 && calificacion <= 10.0) {
		// Si la calificaciC3n es 7 o mC!s, y hasta 10, el estudiante aprueba.
		std::cout << "El estudiante APROBO la asignatura. B!Felicidades! p	" << std::endl;
	} else if (calificacion >= 4.0 && calificacion < 7.0) {
		// Si la calificaciC3n es 4 o mC!s, pero menor que 7, el estudiante va a supletorio.
		std::cout << "El estudiante se encuentra en SUPLETORIO. EsfuC)rzate por el siguiente examen. p" << std::endl;
	} else { // Esta es la condicion por defecto si las anteriores no se cumplen.
		// Si la calificaciC3n es menor que 4, el estudiante reprueba.
		std::cout << "El estudiante REPROBO la asignatura. A seguir intentando. p" << std::endl;
	}
	return 0; // Indica que el programa finalizC3 con exito.
}