#include "main.h"
/**
* leet- Encode string into 1337
* @s: string
* Return: encoded string s
*/

char *leet(char *s)
{
	int a = 0, b = 0, l = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		while (b < l)
		{
			if (s[a] == r[b] || s[a] == r[b] - 32)
			{
				s[a] = n[b];
			}
			b++;
		}
		a++;
	}
	return (s);
}
