#include "main.h"
/**
* _strpbrk - searches a string for any of a set of bytes.
* @s: source string
* accept: characters
* Return: pointer to the byte in s that 
*	matches one of the bytes in accept
*/

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (accept[a])
	{
		b = 0;

		while (s[b])
		{
			if (s[b] == accept[a])
			{
				s += b;
				return (s);
			}
			b++;
		}
		a++;
	}

	return ('\0');
}
