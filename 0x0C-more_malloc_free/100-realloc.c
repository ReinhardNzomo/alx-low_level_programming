#include "main.h"
/**
* _realloc- reallocate memomory in block
* @ptr: pointer to address
* @old_size: original memory
* @new_size: new memory
* Return: pointer to new mem
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp;
	unsigned int i;

	if (ptr == NULL)
	{
		temp = malloc(new_size);
		return (temp);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		temp = malloc(new_size);
		if (temp != NULL)
		{
			for (i = 0; i < min(new_size, old_size); i++)
			{
				*((char *)temp + i) = *((char *)ptr + i);
			}
			free(ptr);
			return (temp);
		}
		else
		{
			return (NULL);
		}
	}
}
