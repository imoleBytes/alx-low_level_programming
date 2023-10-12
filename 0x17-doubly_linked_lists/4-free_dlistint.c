#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - this func frees a dlistint_t list
* @head: head of the list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
