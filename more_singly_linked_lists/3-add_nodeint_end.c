#include "lists.h"
/**
 * add_nodeint - add node
 * @head: the header
 * @n: the data
 * Return: the node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		exit(99);

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
		*head = tmp;
	}
	else
	{
		*head = new;
	}


	return (new);
}
