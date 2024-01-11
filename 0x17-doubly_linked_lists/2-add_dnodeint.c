#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the beginning of dlistint_t list
 * @head: pointer to the head
 * @n: value of the node
 *
 * Return: On Success, return address of new element. On failure, return NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
