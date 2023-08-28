#include "lists.h"

/**
* free_listpt - frees a linked list
* @head: head
* Return: no return.
*/

void free_listpt(listp_t **head)
{
	listp_t *temp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
* free_listint_safe - this func frees a linked list.
* @h: pointer to pointer to d head of a list.
*
* Return: size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
	size_t num_nodes = 0;
	listp_t *new, *h_pt, *add;
	listint_t *current;

	h_pt = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = h_pt;
		h_pt = new;

		add = h_pt;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listpt(&h_pt);
				return (num_nodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		num_nodes++;
	}

	*h = NULL;
	free_listpt(&h_pt);
	return (num_nodes);
}
