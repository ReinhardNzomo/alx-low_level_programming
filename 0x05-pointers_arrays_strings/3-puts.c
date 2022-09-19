#include "main.h"
/**
* _puts- print string followed by anew line
* @str: string
* Return: 0
*/

void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
