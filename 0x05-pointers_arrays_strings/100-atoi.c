#include "main.h"
/**
* _atoi - convert string to int
* @s: string
* Return: integer
*/

int _atoi(char *s)
{
	int x;
	int trojan;

	x = 0;
	while (s[x] != '\0')
	{
		if (s[x] >= '0' && s[x] <= '9')
		{
			if (s[x] == '-')
			{
				_putchar('-');
			}
			if ((s[x] >= '0') || (s[x] <= '9'))
			{
				_putchar(s[x]);
				break;
			}
			trojan = s[x];
			_putchar(res);
		}
		x++;
	}
	return (trojan);
}
