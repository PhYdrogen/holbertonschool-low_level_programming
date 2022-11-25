#include "hash_tables.h"
/**
 * hash_table_delete - delete the hash table
 * @ht: the hash table
 * Return: none
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head, *tmp2;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (; ht && i < ht->size ; i++)
	{
		head = ht->array[i];
		while (head)
		{
			if (head->next)
			{
				tmp2 = head->next;
				free(tmp2->value);
				free(tmp2->key);
				free(tmp2);
			}
			free(head->value);
			free(head->key);
			free(head);
			head = NULL;
		}
	}
	free(ht);
}
