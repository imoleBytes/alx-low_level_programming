#include <stddef.h>

/**
* array_iterator - func statrt
* @array: array of int
* @size: element count
* @action: funct pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !size || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
