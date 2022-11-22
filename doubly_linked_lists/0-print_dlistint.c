#include "lists.h"

/**
 * print_dlistint - print n for each node
 * @h: the header
 * Return: a number conresponding to the sum of each elem
 */
size_t print_dlistint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
