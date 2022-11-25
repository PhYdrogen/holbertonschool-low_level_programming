#include "hash_tables.h"
/**
 * hash_table_print - fn name
 * @ht: hash table
 * Return: none
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ray;
	char *sep;

	sep = "";
	if (!ht)
		return;
	printf("{");
	for (i = 0; ht && i < ht->size; i++)
	{
		ray = ht->array[i];
		while (ray)
		{
			printf("%s", sep);
			printf("'%s': '%s'", ray->key, ray->value);
			sep = ", ";
			ray = ray->next;
		}
	}
	printf("}\n");
}
