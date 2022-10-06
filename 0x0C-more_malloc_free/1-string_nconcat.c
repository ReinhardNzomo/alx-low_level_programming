#include "main.h"

/**
* string_nconcat- concatenates 2 strings
* limited to number of bytes
* @s1: first string
* @s2: second string
* @n: max number of bytes of s2
* Return: Null if function fails
*	pointer to the concat spacce in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int l = n, index;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (index = 0; s1[index]; index++)
	{
		l++;
	}

	concat_str = malloc(sizeof(char) * (l + 1));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	l = 0;

	for (index = 0; s1[index]; index++)
	{
		concat_str[l++] = s1[index];
	}

	for (index = 0; s2[index] && index < n; index++)
	{
		concat_str[l++] = s2[index];
	}

	concat_str[l] = '\0';

	return (concat_str);
}
