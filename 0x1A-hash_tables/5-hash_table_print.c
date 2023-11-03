#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>


void print_linked_l(hash_node_t *head, int *prev);



void hash_table_print(const hash_table_t *ht)
{
	int i = 0;
	int prev = 0;

	printf("{");
	while (i < (int)ht->size)
	{
		
		print_linked_l(ht->array[i], &prev);
		/*if ()
		{
			printf(", ");
		}
		*/
		i++;
	}
	printf("}\n");
}

void print_linked_l(hash_node_t *head, int *prev)
{
	while(head)
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
