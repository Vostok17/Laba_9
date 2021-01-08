#include "my_lib.h"
#include <iostream>
#include <ctime>
using namespace std;

int process(char* str, char* s)
{
	bool flag = true;
	int counter = 0;
	int len_s = str_len(s);
	int ptr = 0;
	do
	{
		for (int i = 0; i < len_s; i++)
		{
			if (str[ptr + i] != s[i]) flag = false;
		}
		if (flag) counter++;
		ptr += str_word(str, ptr);
	} while (ptr <= str_len(str));

	return counter;
}

int str_word(char* string, int ptr)
{
	int cnt = 0;
	while (string[ptr] != ' ' and string[cnt] != '\0')
	{
		cnt++;
		ptr++;
	}
	cnt++;
	return cnt;
}

int str_len(char* string)
{
	int cnt = 0;
	while (string[cnt] != '\0')
	{
		cnt++;
	}
	return cnt;
}