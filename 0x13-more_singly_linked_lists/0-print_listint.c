#include "lists.h"

/*
 * print_listint - function that prints all the elements in the list
 * @ptr: pointer to the head
 *
 * Return: number of nodes and nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t  *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
