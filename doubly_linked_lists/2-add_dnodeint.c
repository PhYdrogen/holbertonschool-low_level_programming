#include "lists.h"

/**
 * add_dnodeint - add node
 * @head: the header
 * @n: the data to write to it
 * Return: the node created
 */

listint_t *add_dnodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		exit(99);

	new->n = n;
	new->next =  *head;
	*head = new;

	return (new);
}
