// ConsumirBibliotecaDinamica.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
	NOTAS:
	Este cliente consume biblioteca dinámica.
	Hay que seguir el tutorial que se encuentra en este proyecto.
	Tener cuidado con las direcciones. Debido a que las salidas de 
	este proyecto se van para una salida en comun de la solución.

	Tambien por alguna razón $(IntDir) arroja error.

	Incluir directorios de inclusión.
	Vincular la librería. Colocar dirección de la .dll y poner el nombre de la dll con extension .lib.

*/

// MathClient.cpp : Client app for MathLibrary DLL.
// #include "pch.h" Uncomment for Visual Studio 2017 and earlier
#include <iostream>
#include "MathLibrary.h"

int main()
{
	// Initialize a Fibonacci relation sequence.
	fibonacci_init(1, 1);
	// Write out the sequence values until overflow.
	do {
		std::cout << fibonacci_index() << ": "
			<< fibonacci_current() << std::endl;
	} while (fibonacci_next());
	// Report count of values written before overflow.
	std::cout << fibonacci_index() + 1 <<
		" Fibonacci sequence values fit in an " <<
		"unsigned 64-bit integer." << std::endl;
}