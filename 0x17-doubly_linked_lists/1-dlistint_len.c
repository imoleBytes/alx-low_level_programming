#include "lists.h"


/**
* dlistint_len - func to find the number of nodes in a double linked list
* @h: pointer to head of node
*
* Return: number of nodes in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL) /* or while (h) */
	{
		count++;
		h = h->next;
	}
	return (count);
}
