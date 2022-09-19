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

	while (*(str + j))
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
