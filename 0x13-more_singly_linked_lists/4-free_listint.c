#include "lists.h"

/**
* free_listint2 - free linked list
* @head: pointer to head of the list
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t **temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head->str);
		free(head);
		head = temp_node;
	}
}
