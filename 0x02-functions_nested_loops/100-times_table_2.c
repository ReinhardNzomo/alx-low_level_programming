#include "main.h"

/**
 * print_times_table - prints the times table up to the integer input
 * calc_table - used to generate table
 * Description: calc_table makes the table
 * @n: integer input
 * @a: integer
 * @b: integer
 * Return: void
 */
void calc_table(int a, int b, int n);

void print_times_table(int n)
{
	int a, b;

	if (n >= 0 && n < 15)
	{
		for (a = 0; a <=  n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				calc_table(a, b, n);
			}
		}
	}
}

void calc_table(int a, int b, int n)
{
	int c, d, e, f;

	c = a * b;
	d = c / 100;
	e = (c /  10) % 10;
	f = (c % 100) % 10;

	if (b == 0)
	{
		_putchar('0');
	}
	else if (c < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + f);
	}
	else if (c < 100)
	{
		_putchar(' ');
		_putchar('0' + e);
		_putchar('0' + f);
	}
	else
	{
		_putchar('0' + d);
		_putchar('0' + e);
		_putchar('0' + f);
	}
	if (b < n)
	{
		_putchar(',');
		_putchar(' ');
	}
	else
		_putchar('\n');
}
