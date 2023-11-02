#include "hash_tables.h"
#include <stdlib.h>



/**
* hash_table_create - This function creates a hashtable
* @size: size of the array of the hashtable
*
* Return: pointer to a hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHt;
	hash_node_t **arr;

	arr = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	newHt = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (newHt == NULL)
	{
		return (NULL);
	}

	newHt->size = size;

	newHt->array = arr;


	return (newHt);
}
