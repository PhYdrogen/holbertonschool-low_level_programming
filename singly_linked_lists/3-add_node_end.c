#include "lists.h"
/**
 * add_node_end - add node at end of list
 * @head: the header node
 * @str: the string to enter
 * Return: the node
 */
list_t *add_node_end(list_t **head, const char *str)
{

	struct list_s *node, *tmp;

	node = malloc(sizeof(list_t));
	tmp = *head;

	if (!node)
		exit(99);

	if (!head)
	{
		while ((*head)->next != NULL)
		{
			*head = (*head)->next;
		}
	}

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	(*head)->next = node;
	*head = tmp;
	return (node);
}
