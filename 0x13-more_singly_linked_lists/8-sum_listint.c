#include "lists.h"

/**
* sum_listint - sum all of data in list
* @head: pointer to the list
*
* Return: sum of n in list
*/

int sum_listint(listint_t *head)
{
	unsigned int n_sum;

	n_sum = 0;

	while (head)
	{
		n_sum += head->n;
		head = head->next
	}

	return (n_sum);
}
