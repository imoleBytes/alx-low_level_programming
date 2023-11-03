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
	hash_node_t *pt;

	/*if (key == NULL || strlen(key) == 0)*/
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/*check if the key already exist and replace the value*/
	/*index = key_index((const unsigned char *)key, ht->size);*/

	/* ht->array[index]*/


	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = (char *)key;
	/*strcpy(new_node->key, key);*/
	new_node->value = (char *)value;
	/*strcpy(new_node->value, value);*/


	/* find the index of the key of the node */
	index = key_index((const unsigned char *)key, ht->size);

	/** insert the node at the index of the array in the hashtable */
	head = ht->array[index];
	if (head == NULL)
	{
		ht->array[index] = new_node;
		new_node->next = NULL;
		return (1);
	}
	else
	{
		pt = head;
		while (pt)
		{
			if (strcmp(pt->key, key) == 0)
			{
				free(pt->value);
				pt->value = (char *)value;
				return (1);
			}
			pt = pt->next;
		}

		ht->array[index] = new_node;
		new_node->next = head;
		return (1);


	}
	return (0);
}
