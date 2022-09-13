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
				if (j < 9)
				{
					_putchar(x + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if (j = 9)
				{
					_putchar(x + '0');
				}
			}
			else if (x >= 10)
			{
				if (j < 9)
				{
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
				else if (j = 9)
				{
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
