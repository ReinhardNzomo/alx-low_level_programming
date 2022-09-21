#include "main.h"
/**
* *cap_string- capitalize words
* @n: array
* Return: caps string of words
*/

char *cap_string(char *n)
{
	int a = 0, i;
	int cspc = 13; /*count of special charcters*/
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < cspc)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
			{
				s[a] -= 32;
			}
			i++;
		}
		a++;
	}

	return (n);
}
