#include "main.h"
/**
* *string_toupper- change string to uppercase
* @n: string
* Return: string n in uppercase
*/

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i])
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] -= 32;
		}
		i++;
	}
	return (n);
}
