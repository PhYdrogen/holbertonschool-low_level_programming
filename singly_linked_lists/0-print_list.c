#include "lists.h"

/**
 * print_list - print the singly list
 * @h: the header of the struct
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;


	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
