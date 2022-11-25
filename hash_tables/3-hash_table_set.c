#include "hash_tables.h"
/**
 * hash_table_set - add element to hash table
 * @ht: the hash table
 * @key: the key cannot be empty
 * @value: is the value is assciated with the key
 * Return: 1 if succeed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new, *tmp;

	if ((ht == NULL) || (key == NULL) || (strlen(key) == 0))
		return (0);

	index = key_index((unsigned char *) key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		return (1);
	}
	else
	{
		if (ht->array[index]->key == key)
		{
			tmp = ht->array[index];
			new->next = tmp;
			ht->array[index] = new;
			return (1);
		}
	}
	return (1);
}
