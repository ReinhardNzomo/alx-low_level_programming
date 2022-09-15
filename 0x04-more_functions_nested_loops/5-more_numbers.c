#include "main.h"

/**
* more_numbers - print numbers 1-14 ten times
* Return: 0
*/
void more_numbers(void)
{
	int a, b;

	for (a = 10; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b / 10 != 0)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
