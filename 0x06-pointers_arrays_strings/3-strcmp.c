#include "main.h"
#include <string.h>
/**
* _strcmp- compare two string
* @s1: param 1
* @s2: param 2
* Return: integer
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1 = s1 + 1;
		s2 = s2 + 1;
	}
	return (0);
}
