#include "main.h"
/**
* print_alphabet_x10 -> prints the lowercase 10x alphabets
*/
void print_alphabet_x10(void)
{
	int a;
	int ch;

	for (a = 0; a < 10; a++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
