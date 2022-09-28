#include "main.h"
/**
* _strlen_recursion - return len of str
* @s: string param
* Return: str len
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;
	
	return (1 + _strlen_recursion(s + 1);
}
