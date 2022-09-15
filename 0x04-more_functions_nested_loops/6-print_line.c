#include "main.h"

/**
* print_line - print straight line given n
* @n: length of line
*/
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('');
	}
}
