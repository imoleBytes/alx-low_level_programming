#include "lists.h"

/**
* pop_listint - this func deletes the head node of a linked list
* @head: pointer to pointer to the first element in the linked list
*
* Return: the data inside the elements that was deleted, or 0
*/

int pop_listint(listint_t **head)
{
	listint_t *tem;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (n);
}
