#include "main.h"
/**
* puts2- print evry other character of a str
* @str: string
* Return: 0
*/

void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
}
