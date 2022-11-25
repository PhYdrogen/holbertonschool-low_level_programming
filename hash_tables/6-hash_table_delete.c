#include "hash_tables.h"


void delete_node(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item);
}
/**
 * hash_table_delete - delete the hash table
 * @ht: the hash table
 * Return: none
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head, *tmp2;
	unsigned long int i = 0;

	head = NULL;

	if (!ht)
		return;

	for (; ht && i < ht->size ; i++)
	{
		if (ht->array[i] != NULL)
			head = ht->array[i];

		while (head != NULL)
		{
			while (head->next != NULL)
			{
				tmp2 = head->next;
				delete_node(head);
				head = tmp2;
			}
			delete_node(head);
			head = NULL;
		}
	}
	free(head);
	free(ht->array);
	free(ht);
}
