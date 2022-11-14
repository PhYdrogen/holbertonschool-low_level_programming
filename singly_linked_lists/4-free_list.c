#include "lists.h"
/**
 * free_list - free my liked list
 * @head: the header
 * Return: none
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	struct list_s *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(tmp);

}
