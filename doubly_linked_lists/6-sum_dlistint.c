#include "lists.h"
/**
 * sum_dlistint - make a sum of the linked list
 * @head: the header
 * Return: the sum
 */
int sum_dlistint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
