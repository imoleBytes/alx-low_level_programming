#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>


/**
* print_linked_l - This function prints the individual linked list.
*
* @head: pointer to the head of node.
* @prev: pointer to if there was a previous printed vaalue
*
*/

void print_linked_l(hash_node_t *head, int *prev)
{
	while (head)
	{
		if (*prev == 1)
			printf(", ");
		printf("'%s': '%s'", head->key, head->value);
		*prev = 1;
		/*if (head->next)*/
			/*printf(", ");*/
		head = head->next;
	}
}



/**
* hash_table_print - This function prints a hashtable
* @ht: pointer to the hashtable.
*/
void hash_table_print(const hash_table_t *ht)
{
	int i = 0;
	int prev = 0;

	printf("{");
	while (i < (int)ht->size)
	{
		print_linked_l(ht->array[i], &prev);
		i++;
	}
	printf("}\n");
}
