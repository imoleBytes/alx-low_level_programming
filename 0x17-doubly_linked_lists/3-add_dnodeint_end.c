#include "lists.h"
#include <stdlib.h>


/**
 * add_dnodeint_end - func adds a new node at the end of a dlistint_t list
 * @head: double pointer to d head of the list
 * @n: data of the element
 * Return: the address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (h == NULL)
	{
		new->prev = h;
		*head = new;
		return (new);
	}

	while (h)	/* node1   node2   node3 NULL */
	{
		if (h->next == NULL)
		{
			h->next = new;
			new->prev = h;
			return (new);
		}
		else
		{
			h = h->next;
		}
	}
	return (new);
}
