#include "lists.h"
/**
 * add_node - function to automaticly add node
 * @head: a pointer to the header
 * @str: the string
 * Return: the address of the new elem
 */
list_t *add_node(list_t **head, const char *str)
{
	struct list_s *node;

	node = malloc(sizeof(list_t));

	if (!node)
		exit(99);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	(*head) = node;
	return (node);
}
