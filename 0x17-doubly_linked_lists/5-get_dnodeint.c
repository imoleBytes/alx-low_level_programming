#include "lists.h"


/**
* get_dnodeint_at_index -func to get the node at nth index
* @head: head of node
* @index: index
*
* Return: node at index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	head = NULL;
	return (head);
}
