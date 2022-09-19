#include "main.h"
/**
* puts_half- print half of string
* @str: string
* Return: 0
*/

void puts_half(char *str)
{
	int i, j = 0;

	while (*(str + i))
		i++;

	j = i / 2;
	if (i % 2)
		j += 1;

	while (j < i)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
