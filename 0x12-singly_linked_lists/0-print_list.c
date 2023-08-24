#include "lists.h"

/**
* print_list - this func prints list.
* @h: list
* Return: int
*/

size_t print_list(const list_t *h)
{
	size_t n_node;

	n_node = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n_node++;
	}
	return (n_node);
}
