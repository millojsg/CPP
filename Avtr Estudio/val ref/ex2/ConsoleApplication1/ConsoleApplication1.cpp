#include <cstdio>
#include <conio.h>
#include <locale.h>
#include <string>
#include <windows.h>

#pragma execution_character_set( "utf-8" )

using namespace std;

class Persona {
public:
    Persona(string, int); // Constructor
    ~Persona(); // Desctructor

    string Nombre; // Propiedad 

    string toString(); // Método

private: 
    int _edad;
};

Persona::Persona(string nombre, int edad) { Nombre= nombre, _edad = edad; }

Persona::~Persona() { _edad = 0; Nombre = ""; }

string Persona::toString() { return Nombre + ", tiene: " + to_string(_edad) + " años."; }



int main()
{
    setlocale(LC_ALL, "spanish"); // Cambiar locale - Suficiente para máquinas Linux
    SetConsoleCP(65001); // Cambiar STDIN -  Para máquinas Windows
    SetConsoleOutputCP(65001);

    Persona Emilio("Emilio", 35);

    printf("Años");

   _getch();
}