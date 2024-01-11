#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t
 * @h: pointer to the head
 *
 * Return: On Success, number of nodes
 *
 **/

size_t print_dlistint(const dlistint_t *h)
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
