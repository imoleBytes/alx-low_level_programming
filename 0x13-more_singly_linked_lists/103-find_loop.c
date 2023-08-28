#include "lists.h"

/**
* find_listint_loop - func finds the loop in a linked list
* @head: pointer to linked list
* Return: address of the node where the loop starts, or NULL
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *move_slow = head;
	listint_t *move_fast = head;

	if (!head)
		return (NULL);

	while (move_slow && move_fast && move_fast->next)
	{
		move_fast = move_fast->next->next;
		move_slow = move_slow->next;
		if (move_fast == move_slow)
		{
			move_slow = head;
			while (move_slow != move_fast)
			{
				move_slow = move_slow->next;
				move_fast = move_fast->next;
			}
			return (move_fast);
		}
	}

	return (NULL);
}
