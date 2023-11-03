#include "hash_tables.h"
#include <stdlib.h>

/**
* hash_table_get - This function finds and get the value associated with
* the key.
*
* @ht: pointer to the hashtable.
* @key: key
* Return: str or Null.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *head;

	idx = key_index((const unsigned char *)key, ht->size);


	head = ht->array[idx];

	while (head != NULL)
	{
		if (head->key == (char *)key)
		{
			return (head->value);
		}
		head = head->next;
	}

	return (NULL);
}
