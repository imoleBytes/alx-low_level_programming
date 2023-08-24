#include "lists.h"
/**
* add_node -func to add a new node at the start of a list.
* @head: head of the linked list.
* @str: string to add.
* Return: address of head.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n_char;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (n_char = 0; str[n_char]; n_char++)
		;

	new->len = n_char;
	new->next = *head;
	*head = new;

	return (*head);
}
