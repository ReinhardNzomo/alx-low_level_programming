#include "main.h"
/**
* reverse_array - reverses the content of an array of integers
* @a: array
* @n: number
* Return: 0
*/

void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int j = n - 1;

	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
