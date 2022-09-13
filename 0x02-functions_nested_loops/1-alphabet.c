#include "main.h"
/**
* main - function
* print_alphabet -> print the lowercase alphs
* Return: 0
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
