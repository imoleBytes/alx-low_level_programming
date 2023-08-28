#include "lists.h"

/**
* get_nodeint_at_index - this func returns the node at index n in a linked list
* @head: first node
* @index: index of the node to return
* Return: pointer to the node or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tem = head;

	while (tem && a < index)
	{
		tem = tem->next;
		a++;
	}
	if (tem)
		return (tem);
	else
		return (NULL);
}
