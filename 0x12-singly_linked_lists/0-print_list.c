#include "list.h"
#include <stdio.h>

/**
 * print_list - print elements of a linked list
 * @h: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		node_count++;
	}

	return (node_count);
}

