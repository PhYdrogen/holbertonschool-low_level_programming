#include "lists.h"

/**
 * pop_listint - pop the last elem
 * @head: the header
 * Return: the head node data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp2;
	int n = 0;

	if (*head != NULL)
	{
		n = (*head)->n;
		tmp2 = (*head)->next;
		free(*head);
		(*head) = tmp2;
	}
	return (n);
}
