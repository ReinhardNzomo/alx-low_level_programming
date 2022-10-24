#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list_t list.
* @head: pointer to head of list
* @str: string to be added
* Return: address to new element or NULL
*/

list_t *add_note(list_t **head, const char *str)
{
	list_t *new;
	int len;
	char *temp_str;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	temp_str = strdup(str);
	if (temp_str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
	{
		len++;
	}

	new->str = temp_str;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
