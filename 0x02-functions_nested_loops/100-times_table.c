#include "main.h"
/**
 * times_table - prints the times table from 0 - n
 */
void print_times_table(int n)
{
	int i, j, x;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			x = (i * j);
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (x >= 10)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			else if (x < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((x % 10) + '0');
			}
			else
				_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
