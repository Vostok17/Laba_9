#include <iostream>
#include <string.h>
#include "my_lib.h"
using namespace std;

int process(char* str, char* s);
int str_word(char* string, int ptr);
int str_len(char* string);

int main()
{
	char str[100], s[20]; 
	cout << "Enter main string: ";
	gets_s(str);
	
	cout << "Enter symbols: ";
	gets_s(s);

	cout << "number = " << process(str, s) << endl;
	system("pause");
}

