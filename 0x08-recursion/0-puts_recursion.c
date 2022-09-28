#include "main.h"
/**
* _puts_recursion- prints a string, followed by a new line
* @s: string
* Return: 0
*/

void _puts_recursion(char *s)
{
	/*base line*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
