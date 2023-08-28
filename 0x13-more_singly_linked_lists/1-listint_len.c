#include "lists.h"
#include <stdio.h>



/**
* listint_len - func to pricount the elements of a linked list
* @h: pointer to the head of the linked list
* Return: number of elements (size_t)
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
