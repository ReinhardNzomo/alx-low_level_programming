#include "main.h"
#include <string.h>
/**
* *_strncat - concat two strings upto n
* @dest: first string
* @src: second string
* Return: dest
*/

char *_strnccat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
