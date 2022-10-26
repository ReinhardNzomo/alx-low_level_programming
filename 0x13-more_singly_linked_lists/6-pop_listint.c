#include "lists.h"

/**
* pop_listint - pop head node, return number
* @head: pointer double
* Return: number
*/

int pop_listint(listint_t **head)
{
	int num;
	listint_t *popped_node;

	num = 0;

	if (head == NULL)
	{
		return (0);
	}

	if (*head == NULL)
	{
		return (0);
	}

	popped_node = *head;
	num = (*head)->n;
	*head = (*head)->next;
	free(popped_node);

	return (num);
}
