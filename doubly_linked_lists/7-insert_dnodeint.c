#include "lists.h"
/**
 * insert_nodeint_at_index - func that insert new node at given position
 * @head: the header
 * @idx: the index to insert
 * @n: the data
 * Return: the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp, *tmp2;
	unsigned int count;

	count = 0;
	/*init struct node*/
	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	/*make a save of the header*/
	tmp2 = *head;
	/*affect node value*/
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while ((*head) != NULL && count < idx)
	{
		if (count == (idx - 1))
		{
			tmp = (*head)->next;
			(*head)->next = new;
			new->next = tmp;
			*head = tmp2;
			return (new);
		}
		*head = (*head)->next;
		count++;
	}
	*head = tmp2;
	return (NULL);
}
