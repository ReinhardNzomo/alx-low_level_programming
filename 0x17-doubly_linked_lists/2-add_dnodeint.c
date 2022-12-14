#include "lists.h"
/**
 * add_dnodeint - adds new node at beginning of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: data to add to the head
 * Return: address of new elemnent or NULL if failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
