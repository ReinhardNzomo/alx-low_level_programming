#include "main.h"
/**
* times_table -> print multiple table
* Return: table
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int x;

			x = (i * j);

			if (x < 10)
			{
				_putchar(x + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (x >= 10)
			{
				_putchar(x);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('$');
		_putchar('\n');
	}
}
