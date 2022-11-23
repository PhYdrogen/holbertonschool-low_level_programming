#include "hash_tables.h"


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	(void)(size);

	return (hash_djb2(key));
}
