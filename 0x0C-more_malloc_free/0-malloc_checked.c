#include "main.h"
/**
* malloc_checked - allocates memory using malloc
* @b: size of mem block to be allocated
* Return: pointer to address of mem block
*/

void *malloc_checked(unsigned int b)
{
	void *mem_block = malloc(b);

	if (mem_block == NULL)
	{
		exit(98);
	}

	return (mem_block);
}
