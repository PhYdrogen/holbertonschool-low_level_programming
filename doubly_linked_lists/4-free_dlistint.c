#include "lists.h"

/**
 * free_dlistint - free a list in order to clean memory
 * @head: the mem
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	struct dlistint_s *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
	free(tmp);
}
