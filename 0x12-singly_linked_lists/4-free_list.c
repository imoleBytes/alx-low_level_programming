#include "lists.h"

/**
* free_list - func to free a list
* @head: head of the linked list.
*/

void free_list(list_t *head)
{
	list_t *currnt;

	while ((currnt = head) != NULL)
	{
		head = head->next;
		free(currnt->str);
		free(currnt);
	}
}
