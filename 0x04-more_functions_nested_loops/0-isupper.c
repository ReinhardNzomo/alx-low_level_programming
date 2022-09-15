#include "main.h"

/**
 * _isupper - checks if letter is caps or not
 * Return: 0 or 1 if letter is small or caps respectively
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
