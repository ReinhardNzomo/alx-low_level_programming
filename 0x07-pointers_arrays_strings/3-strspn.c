#include "main.h"
/**
* _strspn- gets the length of a prefix substring.
* @s: source string
* @accept: accepted string
* Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b])
		{
			if (s[b] != 32)
			{
				t++;
			}
			b++
		}
		a++;
	}

	return (t);
}
