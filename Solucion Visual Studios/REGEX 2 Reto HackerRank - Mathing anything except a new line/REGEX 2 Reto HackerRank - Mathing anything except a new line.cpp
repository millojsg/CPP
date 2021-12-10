#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <regex>

using namespace std;

int main()
{
   // Enter your code here. Read input from STDIN. Print output to STDOUT */
   //
   // Entrada de la variable a buscar coincidencia.
	string s;
	cin >> s;
	//
	// Declaración y defincioón de variable tipo regex.
	regex r;
	r = regex("^.{3}\\..{3}\\..{3}\\..{3}$");
	//
	// Lógica de comparación. Si coincide retornar 'true' si no coincide retornar 'false'.
	if (regex_match(s, r))
	{
		cout << "true";
	}
	else {
		cout << "false";
	}
	return 0;
}

/*dot

The dot(.) matches anything(except for a newline).

Note : If you want to match(.) in the test string, you need to escape the dot by using a slash \..
In Java, use \\.instead of \..

Task

You have a test string .
Your task is to write a regular expression that matches onlyand exactly strings of form : , where each variable  can be any single character except the newline.

Note

This is a regex only challenge.You are not required to write any code.
You only have to fill in the regex pattern in the blank(_________).*/