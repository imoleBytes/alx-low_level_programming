#include "hash_tables.h"

/**
* key_index - This function hashes a string and return an index
* to where the string is to be stored in the array of the hashtable.
*
* @key: the string to be hashed.
* @size: size of the array in the hashtable
*
* Return: idx (unsigned long int) the index on the hashtable.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed_value;
	unsigned long int idx;

	hashed_value = hash_djb2(key);
	idx = hashed_value % size;
	return (idx);
}
