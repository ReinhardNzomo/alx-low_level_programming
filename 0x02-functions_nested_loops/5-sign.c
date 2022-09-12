#include "main.h"
/**
* int print_sign(int n) -> check if number is pos, neg or zero
* @n: number to be checked
* Return: return 1, 0, -1
*/
int print_sign(int n)
{
	if (n = 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
