/*
 Directiva include
     Comienza con numeral.
     Todo en minuscula.
     Libreria de cabecera .h a notificar que se va a usar iostream. 
*/
#include <iostream>

// Declarar un using. De lo contrario se usa el namespace seguido de ::
// ejemplo std::cout<<"Texto de inclusión";

using namespace std;

//
// Declaracion punto de entrada. Básico. 
int main(){
     //
     // Imprimir en consola.
     cout<<"Hola mundo!!!\n\n\rPresione enter para cerrar aplicación...";
     //
     // Esperar un salto de linea para cerrar consola.
     cin.get();
     //
     // Retornar valor de culminación exitosa
     return 0;
}