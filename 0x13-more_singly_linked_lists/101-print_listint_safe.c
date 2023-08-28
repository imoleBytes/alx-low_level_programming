#include "lists.h"

/**
* print_listint_safe - this func prints a linked list, safely
* @head: list of type listint_t to print
*
* Return: numbrber of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t numbr = 0;
	long int diffr;

	while (head)
	{
		diffr = head - head->next;
		numbr++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diffr > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (numbr);
}
