// Vectores.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Son matrices de alto nivel. 

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "This is a Fibonacci series!\n";

	auto print = [](const unsigned long& n) { std::cout << n << endl; };

	vector<unsigned long> fibonacci;
	fibonacci.push_back(0);
	fibonacci.push_back(1);

	for (int i = 1; i <= 100;i++)
	{
		int bacKPos = i - 1;
		unsigned long result = fibonacci[i] + fibonacci[bacKPos];		
		fibonacci.push_back(result);
	}
	
	for_each(fibonacci.begin(), fibonacci.end(), print);
	
	cin;
}
