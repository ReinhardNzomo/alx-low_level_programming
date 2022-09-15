#include "main.h"

/**
* print_most_numbers - print numbers btwn 0 & 9 except 2 & 4
*/
void print_most_numbers(void)
{
	int alx;

	for (alx >= 0; alx < 10; alx++)
	{
		if (alx != 2 || alx != 4)
		{
			_putchar(alx);
		}
	}
	_putchar('\n');
}
