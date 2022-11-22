#include "lists.h"
/**
 * insert_dnodeint_at_index - func that insert new node at given position
 * @head: the header
 * @idx: the index to insert
 * @n: the data
 * Return: the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx,
		int n)
{
	dlistint_t *new, *tmp, *tmp2;
	unsigned int count;

	count = 0;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	/*make a save of the header*/
	tmp2 = *head;
	/*affect node value*/
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *head;
		if (*head != NULL)
			(*head)->prev = new;
		*head = new;
		return (new);
	}

	while ((*head) != NULL && count < idx)
	{
		if (count == (idx - 1))
		{
			tmp = (*head)->next;
			(*head)->next = new;
			new->prev = *head;
			new->next = tmp;
			if (tmp != NULL)
				tmp->prev = new;
			*head = tmp2;
			return (new);
		}
		*head = (*head)->next;
		count++;
	}
	*head = tmp2;
	return (NULL);
}
