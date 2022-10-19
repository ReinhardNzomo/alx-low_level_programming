#include "main.h"
#include <string.h>
/**
* *_strncpy- copy string src to dest
* @dest: param1
* @src: param2
* @n: param integer
* Return: string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
