#include "lists.h"


/**
* sum_dlistint - func to sum up the data of all the nodes
* in the doubly linked list.
* @head: head of node
*
* Return: node at index
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->prev != NULL)
		head = head->prev;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
