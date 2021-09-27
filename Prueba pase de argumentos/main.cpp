#include <iostream>
#include <string>

int a = 0;
std::string b= "Original";

void Mostrar (std::string texto) { std::cout<<texto<<std::endl;}
void Mostrar (int numero) { std::cout<<std::to_string(numero)<<std::endl;}
void Mostrar (int* numero) { std::cout<<numero<<std::endl;}

void PruebaPaseDeArgumentoTipoIntPorValor(int numero)
{
     std::cout<< "Argumento sin modificar: " << numero << std::endl;
     
     numero = numero + 5;

     Mostrar("Argumento modificado: ");
     Mostrar(numero);

     Mostrar("Numero de variable global: ");
     Mostrar(a);
}

void PruebaPaseDeArgumentoTipoIntPorReferencia(int &numero)
{
     std::cout<< "Argumento sin modificar: " << numero << std::endl;
     
     numero = numero + 5;

     Mostrar("Argumento modificado: ");
     Mostrar(numero);

     Mostrar("Numero de variable global: ");
     Mostrar(a);
}

void PruebaPaseDeArgumentoTipoStringPorValor(std::string texto)
{
     Mostrar("Argumento sin modificar: " + texto);

     texto= texto + " (argumento modificado).";

     Mostrar("Argumento modificado: ");
     Mostrar(texto);

     Mostrar("Texto de variable global: ");
     Mostrar(b);
}

int main()
{
     Mostrar("Variable global tipo int: ");
     Mostrar(a);
     Mostrar("------------------------");
     Mostrar("Prueba pase de argumento int");
     PruebaPaseDeArgumentoTipoIntPorValor(a);
     Mostrar("Conclusión:  Los tipos primitivos se pasan por valor.");

     Mostrar("Variable global tipo string: ");
     Mostrar(b);
     Mostrar("------------------------");
     Mostrar("Prueba pase de argumento string");     
     PruebaPaseDeArgumentoTipoStringPorValor(b);
     Mostrar("Conclusión: El tipo string se pasa por valor.");

     Mostrar("Prueba de pase por referencia: ");
     Mostrar("Variable local a");
     Mostrar(a);
     PruebaPaseDeArgumentoTipoIntPorReferencia(a);
}






