#include "main.h"
/**
* strlencheck - get length of string
* @a: string
* @l: counter
* Return: l
*/

int strlencheck(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (strlencheck(a + 1, l + 1));
}

/**
* strcmpcheck - compares string against reverse string
* @a: string
* @l: string length
* Return: 0/1
*/

int strcmpcheck(char *a, int l)
{
	if (*a != (*a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (strcmpcheck(a + 1, l - 2));
}

/**
* is_palindrome - check if string is palindrome
* @s: string
* Return: 1/0
*/

int is_palindrome(char *s)
{
	int l;

	l = strlencheck(s, 0);
	return (strcmpcheck(s, l));
}
