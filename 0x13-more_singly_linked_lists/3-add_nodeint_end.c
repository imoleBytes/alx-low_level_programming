#include "lists.h"


/**
* add_nodeint_end - func to add a node at the end of a linked list
* @head: pointer to the variable that holds the address of the head
* node of the list
* @n: data of the node
* Return: return the address of the node added
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	(*new).n = n;
	(*new).next = NULL;

	tmp = *head;

	if (tmp == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (new);
}
