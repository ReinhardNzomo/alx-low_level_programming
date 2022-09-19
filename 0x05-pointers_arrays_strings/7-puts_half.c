u#include "main.h"
/**
* puts_half- print half of string
* @str: string
* Return: 0
*/

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		j = (i - 1) / 2;
		j += 1;
	}
	else
	{
		j = i / 2;
	}

	while (j < i)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
