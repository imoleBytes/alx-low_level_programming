#include "search_algos.h"
#include <stdio.h>

/**
* binary_search - binary search algorithm, to find a value in an array
* @array: array of integers
* @size: lenght (num of elements in the array)
* @value: the int vaue to find in the array
*
* Return: index, where the value is found, OTHERWISE -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t lo = 0;
	size_t hi = size - 1;
	size_t p = (lo + hi) / 2;

	if (array)
	{
		while (p <= size && lo < size && hi >= lo)
		{
			print_array(array, lo, hi);
			if (array[p] == value)
			{
				return ((int)p);
			}
			else if (array[p] < value)
			{
				lo = p + 1;
			}
			else if (array[p] > value)
			{
				hi = p - 1;
			}
			p = (lo + hi) / 2;
		}
	}
	return (-1);
}

/**
* print_array - prints array or sub-arrray
* @arr: array
* @a: starts of array
* @z: ends of array
*/

void print_array(int *arr, int a, int z)
{
	int i;

	printf("Searching in array: ");
	for (i = a; i < z; i++)
	{
		printf("%d, ", arr[i]);
	}
	printf("%d\n", arr[z]);
}
