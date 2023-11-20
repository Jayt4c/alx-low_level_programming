#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of
 * @head: header pointer
 * @n: int data type
 *Return: the new address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
