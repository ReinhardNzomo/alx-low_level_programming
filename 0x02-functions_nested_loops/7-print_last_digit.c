#include "main.h"
/**
* print_last_digit -> return last digit of a number
* @c: parameter
* Return: last digit
*/
int print_last_digit(int c)
{
	int x = c % 10;

	if (c < 0)
		x = x * -1;
	_putchar(x + '0');

	return (x);
}
