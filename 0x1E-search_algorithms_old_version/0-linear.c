#include "search_algos.h"

/**
* linear_search - function to find a value using the linear search algorithm
* @array: array of integers
* @size: lenght (num of elements in the array)
* @value: the int vaue to find in the array
*
* Return: index, where the value is found, OTHERWISE -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}

	return (-1);
}
