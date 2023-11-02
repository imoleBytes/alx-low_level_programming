#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
* hash_table_set - This function adds an element to the hash table.
*
* @ht: pointer to the hashtable.
* @key: key
* @value: value
*
* Return: 1 if it succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/** create a node */
	hash_node_t *new_node;
	unsigned long int index;
	hash_node_t *head;

	new_node = malloc(sizeof(hash_node_t));

	new_node->key = (char *)key;
	/*strcpy(new_node->key, key);*/
	new_node->value = (char *)value;
	/*strcpy(new_node->value, value);*/
	new_node->next = NULL;

	/* find the index of the key of the node */
	index = key_index((const unsigned char *)key, ht->size);

	/** insert the node at the index of the array in the hashtable */
	head = ht->array[index];
	if (head == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		/* not doing this since we are ading athe beginning of list
		while (1)
		{
			if (head->next == NULL)
			{
				head->next = new_node;
				return (1);
			}
			else
			{
				head = head->next;
			}
		}
		*/
		ht->array[index] = new_node;
		new_node->next = head;
		return (1);
	}
	return (0);
}
