#include "main.h"
#include <stdio.h>
/**
* *rot13- rotate string by 13 places
* @s: string
* Return: encoded string s
*/

char *rot13(char *s)
{
	int a, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; z[i] != '\0'; i++)
	{
		for (j = 0; j < 56; j++)
		{
			if (z[i] == a[j])
			{
				z[i] = n[j];
				break;
			}
		}
	}
	return (s);
}
