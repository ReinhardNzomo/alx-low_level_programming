#include "main.h"
/**
* rev_string- reverse a string
* @s: string to be reversed
* Return: 0
*/

void rev_string(char *s)
{
	int i = 0; int j = 0;
	char str[500];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}

	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}
