#include "lists.h"

/**
* list_len - returns number of elements in a list
* @h: pointer to list
* Return: number of elements in a linked list
*/

size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
