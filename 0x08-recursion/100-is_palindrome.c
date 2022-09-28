#include "main.h"
/**
* strlencheck - get length of string
* @a: string
* @l: counter
* Return: l
*/

int strlencheck(char *a)
{
	if (!*a)
		return (0);
	return (1 + strlencheck(a + 1));
}

/**
* strcmpcheck - compares string against reverse string
* @a: string
* @l: string length
* Return: 0/1
*/

int strcmpcheck(char *a, int l)
{
	if (l < 1)
		return (1);
	if (*a == *(a + 1))
		return (strcmpcheck (a + 1, l - 2));
	return (0);
}

/**
* is_palindrome - check if string is palindrome
* @s: string
* Return: 1/0
*/

int is_palindrome(char *s)
{
	int l;

	l = strlencheck(s);
	return (strcmpcheck(s, l - 1));
}
