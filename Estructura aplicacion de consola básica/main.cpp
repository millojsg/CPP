//
// Declaración de archivos a incluir.
#include <iostream>
#include <string>
//
// Declaración de espacios de nombres.
using namespace std;
//
// Declaración de prototipo de las funciones.
double Dividir(double enumerador, double divisor);
bool EsNumero(const string& a);
void SolicitarNumero(double* numero);
//
// Declaración y definicion de las funciones.
void Mostrar(string texto) { cout<<texto<<endl;}
void Mostrar(double numero) { cout<<to_string(numero)<<endl;}
void Mostrar(double* numero) { std::cout<<numero<<std::endl;}
double Sumar(double a, double b) {return a + b; }
double Restar(double a, double b) {return a - b; }
double Multiplicar(double a, double b) {return a * b; }
//
// Declaración y definición de punto de entrada.
int main(int argc, char * argv[])
{
     //
     // Lógica de negocio
     Mostrar("*****BIENVENIDO A LA CALCULADORA BÁSICA ******");
     //
     // Menu de opciones con bucle for
     char userOptionMenuInput= '0';
     string input1;
     string input2;
     double a = 0;
     double b = 0;

     while(userOptionMenuInput!='5') 
     {    
          Mostrar(""); // Salto de linea          
          Mostrar("Seleccione una opción:");
          Mostrar("1 - Sumar");
          Mostrar("2 - Restar");
          Mostrar("3 - Multiplicar");
          Mostrar("4 - Dividir");
          Mostrar("5 - Salir");

          userOptionMenuInput='0';  
          input1="";
          input2="";
          cin.clear();
          
          cin>>userOptionMenuInput;
     
          try
          {     
               switch(userOptionMenuInput)
               {
                    case '1':

                         Mostrar("Por favor, introduzca la primera cifra a sumar:");                                                                                          
                         SolicitarNumero(&a);

                         Mostrar("Por favor, introduzca la segunda cifra a sumar:");
                         SolicitarNumero(&b);

                         Mostrar("El resultado es:");
                         Mostrar(Sumar(a,b));
                         break;
                    case '2':
                          Mostrar("Por favor, introduzca la primera cifra a restar:");                                                                                          
                         SolicitarNumero(&a);

                         Mostrar("Por favor, introduzca la segunda cifra a restar:");
                         SolicitarNumero(&b);

                         Mostrar("El resultado es:");
                         Mostrar(Restar(a,b));
                         break;
                    case '3':
                           Mostrar("Por favor, introduzca la primera cifra a multiplicar:");                                                                                          
                         SolicitarNumero(&a);

                         Mostrar("Por favor, introduzca la segunda cifra a multiplicar:");
                         SolicitarNumero(&b);

                         Mostrar("El resultado es:");
                         Mostrar(Multiplicar(a,b));                         
                         break;
                    case '4':
                         Mostrar("Por favor, introduzca la primera cifra a dividir (numerador):");                                                                                          
                         SolicitarNumero(&a);

                         Mostrar("Por favor, introduzca la segunda cifra a dividir (divisor):");
                         SolicitarNumero(&b);

                         Mostrar("El resultado es:");
                         Mostrar(Dividir(a,b));                   
                         break;
                    case '5':                    
                         userOptionMenuInput='5';                    
                         break;
                    default:
                         Mostrar("Opción no valida.");                                   
               }
                    
          }
          catch(const std::exception& e)
          {
               // std::cerr << e.what() << '\n';
               Mostrar(e.what());
          }
     }
}
//
// Definiciones de funciones.
double Dividir(double enumerador, double divisor)
{
     if (divisor==0) throw "División por cero no permitida.";

     return enumerador/divisor;
}

bool EsNumero(const string& str)
{
     for (char const &c : str) {
        if (std::isdigit(c) == 0) return false;
     }
     return true;
}

void SolicitarNumero(double* numero)
{
     string userInput;
     bool boolEsNumero = false;
     do{                                 
          cin>>userInput;

          boolEsNumero = EsNumero(userInput); 
     
          if (boolEsNumero)
          {
               *numero = stod(userInput);
          }
          else
          {               
               Mostrar("Ingreso no valido. Por favor intente nuevamente."); 
          }     
     }
     while (!boolEsNumero);
}


