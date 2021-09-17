// Directiva entrada y salida.
#include <iostream>

// Espacio de nombres.
using namespace std;

// Punto de entrada.
int main (int argc,char* argv[])
{
     // Si no se ingresan argumentos entonces:
     if (argc == 1)
     {
          cout<<"El usuario no agregó argumentos de entrada. Intenta ejecutar el programa de la siguiente manera"<<endl;
          cout<<"main.exe Argumento1 Argumento2 Argumento3 \"Argumento 4\"";
     }
     else // En caso de ingresar argumentos, mostrar en consola los argumentos.
     {
          for(int i=1 ; i<argc ; i++)
          {
               cout<<argv[i]<<endl;
          }
     }
     // Esperar un salto de linea para cerrar la aplicación.
     cin.get(); 

     return 0;
}