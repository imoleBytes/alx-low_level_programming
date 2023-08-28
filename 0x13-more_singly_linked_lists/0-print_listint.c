#include "lists.h"
#include <stdio.h>

/**
* print_listint - func to print elements of a linked list
* @h: pointer to the head of the linked list
* Return: number of elements (size_t)
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
