#include "lists.h"

/**
 * dlistint_len - returns number of elements in a dlistint_t
 * @h: pointer to the head
 *
 * Return: On Success, number of elements.
 *
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
