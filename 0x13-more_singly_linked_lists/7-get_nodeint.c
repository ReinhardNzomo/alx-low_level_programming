#include "lists.h"

/**
* get_nodeint_at_index - get nth node of list
* @head: pointer to the lis
* @index: n
* Return: nth node of list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;
	listint_t *temp_node;

	counter = 0;

	while (head)
	{
		temp_node = head;

		if (counter == index)
		{
			return (temp_node);
		}
		head = head->next;
		counter++;
	}
	
	return (NULL);
}
