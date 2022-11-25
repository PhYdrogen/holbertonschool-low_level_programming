#include "hash_tables.h"
/**
 * hash_table_delete - delete the hash table
 * @ht: the hash table
 * Return: none
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head;
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
			free(head->value);
			free(head->key);
			free(head);
			head = NULL;
		}
	}
	free(head);
	free(ht->array);
	free(ht);
}
