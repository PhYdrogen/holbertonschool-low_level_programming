#include "hash_tables.h"
/**
 * hash_table_create - create a hashtable
 * @size: the size of the table
 * Return: a ptr to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array =  malloc(sizeof(hash_node_t));
	return (table);
}
