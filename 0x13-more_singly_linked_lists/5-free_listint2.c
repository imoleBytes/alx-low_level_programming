#include "lists.h"

/**
* free_listint2 - this func frees a linked list
* @head: pointer to pointer to the listint_t list to be freed
*/

void free_listint2(listint_t **head)
{
	listint_t *tem;

	if (head == NULL)
		return;

	while (*head)
	{
		tem = (*head)->next;
		free(*head);
		*head = tem;
	}

	*head = NULL;
}
