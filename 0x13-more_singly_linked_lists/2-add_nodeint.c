#include "lists.h"


/**
* add_nodeint - func to add a node at the beginning of a linked list
* @head: pointer to the variable that holds the address of the head
* node of the list
* @n: data of the node
* Return: return the address of the node added
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	(*new).n = n;
	(*new).next = *head;

	*head = new;

	return (new);
}
