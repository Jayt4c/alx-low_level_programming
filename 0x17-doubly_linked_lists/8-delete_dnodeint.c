#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of the linked list
 * @head: pointer to head
 * @index: index of node
 *
 * Return: On success, return 1. On failure, returns -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (i < index)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
