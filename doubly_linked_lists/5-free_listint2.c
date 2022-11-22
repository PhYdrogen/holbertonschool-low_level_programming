#include "lists.h"

/**
 * free_listint2 - free a list in order to clean memory
 * @head: the mem
 * Return: none
 */
void free_listint2(listint_t **head)
{
	struct listint_s *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
