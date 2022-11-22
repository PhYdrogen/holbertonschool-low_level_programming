#include "lists.h"

/**
 * add_dnodeint - add node
 * @head: the header
 * @n: the data to write to it
 * Return: the node created
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		exit(99);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if ((*head) != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}
