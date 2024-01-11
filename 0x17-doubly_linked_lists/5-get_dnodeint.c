#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node of the linked list
 * @head: pointer to the head
 * @index: index of the node
 *
 * Return: On success, returns nth node. On failure, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}

	return (NULL);
}

