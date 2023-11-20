#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t
 * @head: input header pointer
 * @n: Input data int
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *temp;

	current = *head;
	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return  (NULL);
	}

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = temp;

	return (temp);
}
