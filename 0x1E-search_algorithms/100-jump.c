#include "search_algos.h"
#include <math.h>


/**
* jump_search -  search function using the jump algorithm
* @array: array
* @size: lenght of array
* @value: value to earch for
*
* Return: index, otherwise -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	int a = 0;
	size_t b = sqrt(size);

	if (!array)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", 0, array[0]);

	while (array[b] < value)
	{
		a = b;

		printf("Value checked array[%ld] = [%d]\n", b, array[b]);
		b += sqrt(size);

		if (b > size)
		{
			printf("Value found between indexes [%d] and [%ld]\n", a, b);
			for (i = a; i < size; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
			return (-1);
		}
	}

	printf("Value found between indexes [%d] and [%ld]\n", a, b);
	for (i = a; i <= b; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
