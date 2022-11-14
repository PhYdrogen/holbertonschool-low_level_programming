#include "lists.h"
/**
 * list_len - return the number of elem in a linked list
 * @h: the header
 * Return: the number of elem
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	struct list_s *temp;

	temp = malloc(sizeof(list_t));
	while (h != NULL && (temp->next != h->next))
	{
		temp->next = h->next;
		h = h->next;
		count++;
	}
	return (count);
}
