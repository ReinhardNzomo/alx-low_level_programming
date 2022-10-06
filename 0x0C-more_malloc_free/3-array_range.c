#include "main.h"
/**
* array_range - creates an array of integers form min to max
* @min: minimum value
* @max: max value
* Return: pointer to array
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	size = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}

	ptr =malloc(sizeof(int) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}
