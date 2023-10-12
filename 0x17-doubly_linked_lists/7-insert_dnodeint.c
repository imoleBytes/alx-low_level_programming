#include "lists.h"
#include <stdlib.h>


/**
 * insert_dnodeint_at_index - func to insert a new node at a specific
 * index of a double linked list
 * @h: double pointer to d head of the list
 * @idx: index
 * @n: data of the node to be inserted
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h;
	dlistint_t *new;
	unsigned int i = 0;


	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (idx == 0)
		{
			new = add_dnodeint(h, n);
			return (new);
		}
		if (i == idx)
		{
			new->n = n;
			new->prev = head->prev;
			head->prev->next = new;
			new->next = head;
			head->prev = new;
			return (new);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
