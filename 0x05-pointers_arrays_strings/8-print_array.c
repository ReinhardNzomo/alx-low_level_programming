#include "main.h"
/**
* print_array - prints n elements of an array of integeres
* @a: array
* @n: parameter times
* Return: 0
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != n - 1)
		{
			printf("%s, ", a[i]);
		}
		else
		{
			printf("%s", a[i]);
		}
		i++;
	}
	printf("\n");
}

