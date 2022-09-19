#include "main.h"
/**
* *_strcpy - copy src to dest
* @dest: array destination
* @src: array source
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
