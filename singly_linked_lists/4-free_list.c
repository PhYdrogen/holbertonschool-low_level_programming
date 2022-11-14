#include "lists.h"
/**
 * free_list - free my liked list
 * @head: the header
 * Return: none
 */
void free_list(list_t *head)
{
	struct list_s *tmp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(tmp);

}
