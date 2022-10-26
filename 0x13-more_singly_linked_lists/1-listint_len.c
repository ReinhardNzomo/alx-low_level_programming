#include "lists.h"

/**
* listint_len - get number of elements
* in a linked list
* @h: pointer to the head of the list
* Return: number of elemts in list
*/

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
