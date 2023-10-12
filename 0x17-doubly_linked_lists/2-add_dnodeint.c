#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - func adds a new node at d beginning of a dlistint_t list
 * @head: double pointer to d head of the list
 * @n: data of the element
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h = *head; /* adddress of the head node now h */

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;

	if (h != NULL)
	{
		while (h->prev != NULL)
		{
			h = h->prev;
		}
	}

	new->next = h; /* or h */
	if (h != NULL)
	{
		h->prev = new;
	}
	*head = new;

	return (new);
}
