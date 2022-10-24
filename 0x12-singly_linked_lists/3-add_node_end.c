#include "lists.h"

/**
* add_node_end - adds node at end of a list
* @head: poointer to head of list
* @str: string to be added
* Return: NULL if fails/ address of element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new, *lastnode;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len];)
	{
		len++;
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = new;
	}

	return (*head);
}
