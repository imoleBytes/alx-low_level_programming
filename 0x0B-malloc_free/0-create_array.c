#include <stdlib.h>



/**
* create_array - func to create a block of memmory and fill
* @size: array size
* @c: character to fill
* Return: a pointer to array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int *array;
	unsigned int i;

	array = malloc(sizeof(*array) * size);

	if (array != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}

		return (array);
	}

	return (NULL);
}
