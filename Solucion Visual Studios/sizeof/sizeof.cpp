#include <iostream>
#include <stdio.h>
#define NAME_LENGTH 10
#define TABLE_SIZE 100
#define UNITS_NUMBER 10

using namespace std;

struct unit
{  /* Define a struct with an internal union */
	int x;
	float y;
	double z;
	short int a;
	long b;
	union
	{ /* Union with no name because it is internal to the struct */
		char name[NAME_LENGTH];
		int id;
		short int sid;
	} identifier;
};

int main(int argc, char* argv[])
{
	int table[TABLE_SIZE];
	struct unit data[UNITS_NUMBER];

	printf("%d\n", sizeof(struct unit)); /* Print size of structure */
	printf("%d\n", sizeof(table));       /* Print size of table of ints */
	printf("%d\n", sizeof(data));        /* Print size of table of structs */

	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

	return 0;
}