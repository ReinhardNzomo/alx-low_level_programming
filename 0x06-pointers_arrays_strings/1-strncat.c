#include "main.h"
/**
* *_strncat - concatenates two strings upto n
* @dest: destintation string
* @src: source string
* @n: limit of concat
* Return: pointer to final dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len])
	{
		len++;
	}

	while (i < n && src[i])
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len + n + 1] = '\0';

	return (dest);
}
