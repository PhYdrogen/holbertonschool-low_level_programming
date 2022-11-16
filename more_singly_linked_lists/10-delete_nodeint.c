#include "lists.h"
/**
 * delete_nodeint_at_index - delete node
 * @head: the header
 * @index: the index to delete
 * Return: the succes of the mission
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	tmp = *head;

	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			*head = (*head)->next;
			free(tmp);
			return (1);
		}
		else
		{
			free(*head);
			*head = NULL;
			return (1);
		}
	}
	while ((*head)->next != NULL && count < index)
	{
		if (((count + 1) - index) == 0)
		{
			tmp2 = *head;
		}
		*head = (*head)->next;
		count++;
	}
	if ((count + 1) == index)
	{
		tmp2->next = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	return (-1);
}
