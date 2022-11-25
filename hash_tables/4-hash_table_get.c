#include "hash_tables.h"
/**
 * hash_table_get - get the value for the key
 * @ht: the hash table
 * @key: the key
 * Return: the value associated with the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *tmp;

	index = 0;
	if (ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (0);

	if (strcmp(ht->array[index]->key, key) == 0)
	{
		tmp = ht->array[index];
		while (tmp->next != NULL)
		{
			if (tmp->next == NULL)
			{
				return (ht->array[index]->value);
			}
			tmp = tmp->next;
		}
	}
	return (0);
}
