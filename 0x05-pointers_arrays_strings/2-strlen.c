#include "main.h"
/**
* _strlen- returns length of string in int
* @s: string
* Return: 0
*/
int _strlen(char *s)
{
	int x = 0;

	while (*(s + x))
	{
		x++;
	}

	return (x);
}
