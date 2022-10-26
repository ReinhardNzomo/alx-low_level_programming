#include "lists.h"

/**
* add_nodeint_end - add node at end of list
* @head: pointer to list
* @n: integer to add to list
* Return: NULL/address to list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr_node;

	ptr_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (ptr_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (ptr_node->next != NULL)
		{
			ptr_node = ptr_node->next;
		}
		ptr_node->next = new_node;
	}

	return (NULL);
}
