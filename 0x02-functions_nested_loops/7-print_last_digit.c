#include "main.h"
/**
* print_last_digit -> return last digit of a number
* @c: parameter
* Return: last digit
*/
int print_last_digit(int c)
{
	int x;

	if (n < 0)
	{
		n = -n;
	}
	x = n % 10;
	_putchar(x + '0');

	return (x);
}
