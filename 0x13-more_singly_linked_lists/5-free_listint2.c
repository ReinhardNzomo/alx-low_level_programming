#include "lists.h"

/**
* free_listint2 - free linked list
* @head: pointer to head of the list
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (!head)
	{
		return;
	}

	while (*head != NULL)
	{
		temp_node = *head;
		*head = (*head)->next;
		free(temp_node);
	}
}
