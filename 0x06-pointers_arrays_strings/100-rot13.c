#include "main.h"
/**
* *rot13- rotate string by 13 places
* @s: string
* Return: encoded string s
*/

char *rot13(char *s)
{
	int a, j;
	char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (j = 0; j < 56; j++)
		{
			if (s[a] == x[j])
			{
				s[a] = n[j];
				break;
			}
		}
	}
	return (s);
}
