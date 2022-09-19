#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - keygen
* Return: 0
*/

int main()
{
	int i, len;

	len = 10;
	srand((unsigned int) time(NULL));
	for (i = 0; i < len; i++)
	{
		int k = rand() % 128;

		if ((k >= 48 && k<= 57) || (k >= 65 && k <= 90) || (k >= 97 && k<= 122))
		{
			printf("%c", k);
		}
		else
		{
			i--;
		}
	}
	printf("\n");

	return (0);
}
