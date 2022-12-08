#include "lists.h"
/**
 * sum_dlistint - returns sum of all the data (n) of linked list.
 * @head: pointer to the head of the list
 * Return: sum else 0
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
