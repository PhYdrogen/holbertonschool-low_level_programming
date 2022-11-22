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
	new->next =  *head;
	*head = new;

	return (new);
}
