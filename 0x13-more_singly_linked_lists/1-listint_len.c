#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked
 * @h: header pointer
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
