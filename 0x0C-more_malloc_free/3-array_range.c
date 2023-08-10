#include <stdlib.h>

/**
* array_range - func creates an array of ints
* @min: min
* @max: max
* Return: arr
*/
int *array_range(int min, int max)
{
	int *arr, a = 0, b = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (a <= max - min)
		arr[a++] = b++;
	return (arr);
}
