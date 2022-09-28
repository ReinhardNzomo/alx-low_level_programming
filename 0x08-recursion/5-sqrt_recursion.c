#include "main.h"
#include <stdio.h>
/**
* _sqrt- square root
* @x: number
* @r: dividing number
* Return: squareroot
*/

int _sqrt(int x, int r);

/**
* _sqrt_recursion - return naturasqr root
* @n: number param
* Return: sqr root
*/

int _sqrt(int x, int r)
{
	if (r * r == x)
		return (r);
	else if (r * r > x)
		return (-1);
	return (_sqrt(x, (r + 1)));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, 1));
}
