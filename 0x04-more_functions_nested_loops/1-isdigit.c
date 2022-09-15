#include "main.h"

/**
 * _isdigit - check if parameter is digit
 * @c: parameter to be checked
 * Return: 1 if digit, 0 else.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);

}
