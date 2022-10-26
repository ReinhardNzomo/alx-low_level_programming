#include "lists.h"

/**
* add_nodeint - add node at beginning of list
* @head: pointer to the head node of list
* @n: integer to add
* Return: NULL/address of node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
