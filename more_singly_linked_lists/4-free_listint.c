#include "lists.h"

/**
 * free_listint - free a list in order to clean memory
 * @head: the mem
 * Return: none
 */
void free_listint(listint_t *head)
{
	struct listint_s *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
	free(tmp);
}
