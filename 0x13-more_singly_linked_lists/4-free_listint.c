#include "lists.h"

/**
* free_listint - free linked list
* @head: pointer to head of the list
* Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
}
