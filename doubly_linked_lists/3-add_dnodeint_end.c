#include "lists.h"
/**
 * add_dnodeint_end - add node
 * @head: the header
 * @n: the data
 * Return: the node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		exit(99);
	}
	new->n = n;
	new->next =  NULL;
	if (*head != NULL)
	{
		tmp = *head;
		while ((*head)->next != NULL)
		{
			*head = (*head)->next;
		}
		(*head)->next = new;
		new->prev = *head;
		*head = tmp;
	}
	else
	{
		*head = new;
	}

	return (new);
}
