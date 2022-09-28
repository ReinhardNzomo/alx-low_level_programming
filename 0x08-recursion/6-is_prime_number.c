#include "main.h"
/**
* prime_check - check if number is prime
* @x: number to be checked
* @r: divisor
* Return: 1/0
*/

int prime_check(int x, int r)
{
	if (x == r)
		return (1);
	else if (x % r == 0)
		return (0);
	return (prime_check(x, (r + 1)));
}

/**
* is_prime_number - return 1 for prime, 0 else
* @n: number to check if prime
* Return: 1/0
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(n, 2));
}
