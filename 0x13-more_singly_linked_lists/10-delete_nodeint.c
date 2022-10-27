#include "lists.h"

/**
* delete_nodeint_at_index - deletes
* a node at a given position
* @head: pointer to the list
* @index: index of the node position
*
* Return: sum of n in list
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node;
	listint_t *next_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	next_node = *head;
	prev_node = NULL;
	if (index == 0)
	{
		*head = (*head)->next;
		free(next_node);
		return (1);
	}
	for (i = 0; i < index; i += 1)
	{
		if (next_node == NULL)
			return (-1);
		prev_node = next_node;
		next_node = next_node->next;
	}
	if (prev_node)
		prev_node->next = next_node->next;
	free(next_node);

	return (1);
}
