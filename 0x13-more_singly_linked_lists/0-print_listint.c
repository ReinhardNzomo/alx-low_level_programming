#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list.
* @h: head of listint_t list
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	const listint_h *ptr = h;
	size_t counter = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		counter++;
		ptr = ptr->next;
	}

	return (counter);
}
