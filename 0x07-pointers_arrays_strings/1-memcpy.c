#include "main.h"
/**
* _memcpy- copy memory area
* @dest: destination memory area
* @src: source memoty area
* @n: number of bytes to be copied from src
* Return: memory area copied
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
