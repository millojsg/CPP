// Los vectores son una matriz unidimensional

#include <iostream>
#include <string>

using namespace std;
 
int main()
{
	// Declaración de vector
	string meses[12]{"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
	
	int dimensionMatriz = sizeof(meses) / sizeof(string);

	for (int i = 0;i < dimensionMatriz ;i++)
	{
		std::cout << meses[i] <<"\n";
	}

	cin;
}