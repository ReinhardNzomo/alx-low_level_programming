#include "main.h"
/**
* _strspn- gets the length of a prefix substring.
* @s: source string
* @accept: accepted string
* Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int b;
	unsigned int t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
			b++;
		}
		a++;
	}

	return (t);
}
