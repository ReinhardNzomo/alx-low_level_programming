#include "lists.h"

/**
* print_list - func to print all elements of a list
* @h: pointer to the lisst
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t counter = 0;

	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		counter++;
		temp = temp->next;
	}

	return (counter);
}
