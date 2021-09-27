 // 
 // Declaración directivas
#include <iostream>
#include <string>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds


std::string * ptr;

void PaseDePunteroVariableInterna();

int main(){
     std::cout<<"Entrada en main";
     // std::cout<<"Puntero a inicio de aplicación: "<< ptr;
     // std::cout<<"Valor Puntero a inicio de aplicación: "<< *ptr;
     std::cin.get();

     PaseDePunteroVariableInterna();

     // std::cout<<"Puntero despues de asignacion: "<< ptr;
      std::cout<<"Valor Puntero despues de asignacion: "<< *ptr;

     std::cin.get();

     int contador= 0;
     while (*ptr=="a" || contador==12)
     {
          std::cout<<"El valor de la variable aun vive.";

          std::this_thread::sleep_for (std::chrono::seconds(5));
          contador++;
     }     
     
     std::cin.get();
     return EXIT_SUCCESS;
}

void PaseDePunteroVariableInterna()
{
     std::string variableInterna= "a";
     ptr = &variableInterna;
     std::cout<<"Variable: "<<variableInterna;    
     std::cout<<"El puntero apunta a: "<<ptr;
     std::cout<<"El valor del puntero es: "<<*ptr;
     std::cin.get();
}





