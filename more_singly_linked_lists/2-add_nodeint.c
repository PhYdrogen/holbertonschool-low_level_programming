#include "lists.h"

/**
 * add_nodeint - add node
 * @head: the header
 * @n: the data to write to it
 * Return: the node created
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		exit(99);

	new->n = n;
	if (head == NULL)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		(*head)->next = new;
	}

	return (new);

}
