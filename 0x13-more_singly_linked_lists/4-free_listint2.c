#include "lists.h"

/**
* free_listint2 - free linked list
* @head: pointer to head of the list
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t **temp_node = head;

	if (temp_node != NULL)
	{
		while (*head != NULL)
		{
			ptr = *head;
			free(ptr);
			*head = (*head)->next;
		}
	}
	else
	{
		*temp_node = NULL;
	}
}
