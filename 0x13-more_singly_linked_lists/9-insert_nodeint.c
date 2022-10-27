#include "lists.h"

/**
* insert_nodeint_at_index - inserts
* a new node at a given position
* @head: pointer to the list
* @idx: index of the node position
* @n: integer to add
*
* Return: sum of n in list
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node, *node_temp;

	if (!head && !*head)
		return (NULL);
	
	node_temp = *head;

	if (idx == 1)
	{
		node = malloc(sizeof(listint_t));
		if (!node)
			return (NULL);
		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}
	else
	{
		while (node_temp)
		{
			if (idx == i + 1)
			{
				node = malloc(sizeof(listint_t));
				if (!node)
					return (NULL);
				node-> = n;
				node->next = node_temp->next;
				node_temp->next = node;
				return (node);
			}
			node_temp = node_temp->next;
			i++;
		}
	}

	return (NULL);
}
