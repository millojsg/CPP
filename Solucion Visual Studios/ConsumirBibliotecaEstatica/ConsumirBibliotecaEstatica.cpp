// ConsumirBibliotecaEstatica.cpp : 
// Este archivo contiene la función "main". 
// La ejecución del programa comienza y termina ahí.
// Para implementar MathLibrary.lib. Se debe entrar en propiedades de la solución. 
// seleccionar en la parte de arriba "Todas las configuraciones" y "Todas las plataformas"
// Ir a C++>General>>Directorios de inclusion adicionales y agregar el directorio de la biblioteca estático.

// MathClient.cpp
// compile with: cl /EHsc MathClient.cpp /link MathLibrary.lib 

#include <iostream>
#include "MathLibrary.h"

int main()
{
	double a = 7.4;
	int b = 99;

	std::cout << "a + b = " <<
		MathLibrary::Arithmetic::Add(a, b) << std::endl;
	std::cout << "a - b = " <<
		MathLibrary::Arithmetic::Subtract(a, b) << std::endl;
	std::cout << "a * b = " <<
		MathLibrary::Arithmetic::Multiply(a, b) << std::endl;
	std::cout << "a / b = " <<
		MathLibrary::Arithmetic::Divide(a, b) << std::endl;

	std::cin;
	
	return 0;
}
