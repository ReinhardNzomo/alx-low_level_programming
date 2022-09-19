#include "main.h"
/**
* _atoi - convert string to int
* @s: string
* Return: integer
*/

int _atoi(char *s)
{
	short boolean;
	int result, i, neg;

	i = result = boolean = 0;
	neg = -1;

	while (s[x] != '\0')
	{
		if (s[i] == '-')
			neg *= -1;

		if (s[x] >= '0' && s[x] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	result *= neg;
	return (result);
}
