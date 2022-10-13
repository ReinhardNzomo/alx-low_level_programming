#include "function_pointers.h"
/**
* int_index-searches for integer
* @array: array to be searched
* @size: array size
* @cmp: pointer to function
* Return: -1 if no match or size < 0
*	pointer to first corresponding element
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if ((array == NULL) || (cmp == NULL))
	{
		return (-1);
	}

	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
