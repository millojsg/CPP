// Declaración de directivas.
#include <iostream>
#include <fstream>
#include <istream>
// include <consoleapi2.h> // Para configurar codificación de la consola
#include <WinNls.h> // Lista de codificaciones
#include <string> // Para acceder a la funcion getline.
#include <string>
#include <iostream>
#include <Windows.h>
#include <cstdio>

// Declaración de espacios de nombres.

// Declaración de funciones.
void Inicializar();
void MostrarTexto(std::string path);

// Declaración de variables.
std::string linea = "";
std::string texto = "";
std::string directorioActual="";
int main(int argc, char* argv[])
{    
	Inicializar();

     if ( argc==1 )
     {
		std::cout<< "Directorio actual: " << directorioActual << std::endl;
		std::cout<< "Nombre de aplicacion actual argv[0]: " << argv[0] << std::endl;
          std::cout<<"Falto el nombre del archivo que desea leer."<< std::endl;
     }
     else
     {	
		std::cout<<"**********"<<argv[1]<<"**********"<<std::endl;
	     MostrarTexto(argv[1]);
     }
     std::cin.get();
	return 0;
}

// Definición de funciones.
void Inicializar()
{		
	// Cofigurar la codificación a UTF-8
	SetConsoleOutputCP(CP_UTF8);
	
	// Habilitar buffer para evitar que VS corte la secuencia de byte UTF-8
	setvbuf(stdout, nullptr, _IOFBF, 1000);

	//
	// Directorio actual
	// directorioActual = system("cd");
}

void MostrarTexto(std::string path)
{
	std::ifstream archivo(path);
	while (std::getline(archivo, linea))
	{
		texto = texto + linea +  "\r\n";
	}	
	std::cout << texto;
}