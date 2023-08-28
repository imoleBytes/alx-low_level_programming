#include "lists.h"

/**
* insert_nodeint_at_index - func to insert a new node in a linked list
* @head: pointer to pointer to the first node in the list
* @idx: index where the new node is added
* @n: data to insert in the new node
* Return: pointer to the new node, or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tem = *head;
	unsigned int i;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; tem && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = tem->next;
			tem->next = new;
			return (new);
		}
		else
			tem = tem->next;
	}

	return (NULL);
}
