#include <stdio.h>
#include "lists.h"

/**
* print_dlistint - func to print data of a double linked list
* @h: pointer to head of node
*
* Return: number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;

	}
	return (count);
}
