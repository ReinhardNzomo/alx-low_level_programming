#include "main.h"
/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: number of array elements
* @size: bytes of each element in array
* Return: NULL if nmemb or size is 0 or
*	if malloc fails else
*	return pointer to address of memory block of array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total_size;

	total_size = nmemb * size;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total_size; i++)
	{
		ptr[total_size] = 0;
	}

	return (ptr);
}
