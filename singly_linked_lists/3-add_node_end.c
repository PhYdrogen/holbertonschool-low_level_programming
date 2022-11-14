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

	if (!node)
		exit(99);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;


	if (*head != NULL)
	{
		tmp = *head;
		while ((*head)->next != NULL)
		{
			*head = (*head)->next;
		}
		(*head)->next = node;
		*head = tmp;
	}
	else
	{
		(*head) = node;
	}
	return (node);
}
