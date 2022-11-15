#include "lists.h"

/**
 * get_nodeint_at_index - Write a function that returns the nth node of a
 * @head: the header
 * @index: the index
 *Return: the node at the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (0);

	while (count < index)
	{
		if (head->next == NULL)
			return (NULL);

		head = head->next;
		count++;
	}
	return (head);
}
