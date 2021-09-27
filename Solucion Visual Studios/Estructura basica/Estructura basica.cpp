/**********************************************************************************
███████╗███████╗████████╗██████╗ ██╗   ██╗ ██████╗████████╗██╗   ██╗██████╗  █████╗    
██╔════╝██╔════╝╚══██╔══╝██╔══██╗██║   ██║██╔════╝╚══██╔══╝██║   ██║██╔══██╗██╔══██╗   
█████╗  ███████╗   ██║   ██████╔╝██║   ██║██║        ██║   ██║   ██║██████╔╝███████║   
██╔══╝  ╚════██║   ██║   ██╔══██╗██║   ██║██║        ██║   ██║   ██║██╔══██╗██╔══██║   
███████╗███████║   ██║   ██║  ██║╚██████╔╝╚██████╗   ██║   ╚██████╔╝██║  ██║██║  ██║   

██████╗  █████╗ ███████╗██╗ ██████╗ █████╗
██╔══██╗██╔══██╗██╔════╝██║██╔════╝██╔══██╗
██████╔╝███████║███████╗██║██║     ███████║
██╔══██╗██╔══██║╚════██║██║██║     ██╔══██║
██████╔╝██║  ██║███████║██║╚██████╗██║  ██║

██████╗    ██████╗ ██╗     ██╗   ██╗███████╗    ██████╗ ██╗     ██╗   ██╗███████╗
██╔════╝    ██╔══██╗██║     ██║   ██║██╔════╝    ██╔══██╗██║     ██║   ██║██╔════╝
██║         ██████╔╝██║     ██║   ██║███████╗    ██████╔╝██║     ██║   ██║███████╗
██║         ██╔═══╝ ██║     ██║   ██║╚════██║    ██╔═══╝ ██║     ██║   ██║╚════██║
╚██████╗    ██║     ███████╗╚██████╔╝███████║    ██║     ███████╗╚██████╔╝███████║
╚═════╝    ╚═╝     ╚══════╝ ╚═════╝ ╚══════╝    ╚═╝     ╚══════╝ ╚═════╝ ╚══════╝
**********************************************************************************/
//
// DECLARACIÓN  DE ARCHIVOS A INCLUIR.
#include <windows.h> // Es importante el orden. Este debe ir antes de WinNls.h
#include <iostream>
#include <string>
#include <WinNls.h> // Lista de codificaciones
//
// DEFINICIONES 
#define PI 3.14
//
// DECLARACIÓN DE ESPACIOS DE NOMBRES.
using namespace std;
//
// DECLARACIÓN DE PROTOTIPO DE FUNCIONES.
void Inicializar();
double Dividir(double enumerador, double divisor);
bool EsNumero(const string& a);
void SolicitarNumero(double* numero);
//
// DECLARACIÓN Y DEFINICIÓN FUNCIONES.
void Mostrar(string texto) { cout << texto << endl; }
void Mostrar(double numero) { cout << to_string(numero) << endl; }
void Mostrar(double* numero) { std::cout << numero << std::endl; }
double Multiplicar(double a, double b) { return a * b; }
//
// DECLARACIÓN Y DEFINICIÓN DE PUNTO DE ENTRADA.
int main(int argc, char* argv[])
{
	Inicializar();
	//
	// Lógica de negocio ↓
	cout << "Valor definición PI " << PI<< endl;
	Mostrar("*****BIENVENIDO A LA CALCULADORA BÁSICA ******");
	//
	// Creación de variables.
	char userOptionMenuInput = '0';
	double a = 0;
	double b = 0;
	//
	// Menu de opciones con bucle do-while.
	do
	{
		//
		// Mostrar opciones del menu.
		Mostrar(""); // Salto de linea          
		Mostrar("Seleccione una opción:");
		Mostrar("1 - Multiplicar");
		Mostrar("2 - Dividir");
		Mostrar("3 - Salir");
		
		userOptionMenuInput = '0';
		
		cin >> userOptionMenuInput;

		try
		{
			switch (userOptionMenuInput)
			{
				case '1':
					Mostrar("Por favor, introduzca la primera cifra a multiplicar:");
					SolicitarNumero(&a);

					Mostrar("Por favor, introduzca la segunda cifra a multiplicar:");
					SolicitarNumero(&b);

					Mostrar("El resultado es:");
					Mostrar(Multiplicar(a, b));
					break;
				case '2':
					Mostrar("Por favor, introduzca la primera cifra a dividir (numerador):");
					SolicitarNumero(&a);

					Mostrar("Por favor, introduzca la segunda cifra a dividir (divisor):");
					SolicitarNumero(&b);

					Mostrar("El resultado es:");
					Mostrar(Dividir(a, b));
					break;
				case '3':
					userOptionMenuInput = '3';
					break;
				default:
					Mostrar("Opción no valida.");
			}
		}
		catch (const std::exception& e)
		{
			// std::cerr << e.what() << '\n';
			Mostrar(e.what());
		}
	} while (userOptionMenuInput != '3');
}
//
// DEFINICIONES DE LAS FUNCIONES.

/// <summary>
/// Inicialización de la aplicación.
/// </summary>
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

/// <summary>
/// Devuelve un double resultado de la divisíón de dos numeros dados.
/// </summary>
/// <param name="enumerador">double</param>
/// <param name="divisor">double</param>
/// <returns></returns>
double Dividir(double enumerador, double divisor)
{
	if (divisor == 0) throw "División por cero no permitida.";
	return enumerador / divisor;
}

/// <summary>
/// Devuelve un boolean indicando que el valor dado es un numero.
/// </summary>
/// <param name="str"></param>
/// <returns></returns>
bool EsNumero(const string& str)
{
	for (char const& c : str) {
		if (std::isdigit(c) == 0) return false;
	}
	return true;
}

/// <summary>
/// Solicita un numero al usuario el cual se valida y luego lo almacena en el apuntador dado.
/// </summary>
/// <param name="numero"></param>
void SolicitarNumero(double* numero)
{
	string userInput;
	bool boolEsNumero = false;
	do {
		cin >> userInput;

		boolEsNumero = EsNumero(userInput);

		if (boolEsNumero)
		{
			*numero = stod(userInput);
		}
		else
		{
			Mostrar("Ingreso no valido. Por favor intente nuevamente.");
		}
	} while (!boolEsNumero);
}