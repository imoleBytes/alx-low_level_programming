#include "lists.h"

/**
* free_listint - func to free a list of int
* @head: head of the linked list.
*/

void free_listint(listint_t *head)
{
	listint_t *currnt;

	while ((currnt = head) != NULL)
	{
		head = head->next;
		/*/ free(currnt->str);*/
		free(currnt);
	}
}
