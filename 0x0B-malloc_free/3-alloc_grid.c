#include <stdlib.h>



/**
* alloc_grid - func to create 2D array filled with 0
* @width: w
* @height: h
* Return: a pointer to 2d array
*/

int **alloc_grid(int width, int height)
{
	int **array;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		array[a] = malloc(sizeof(int) * width);
		if (array[a] == NULL)
		{
			for (a = a - 1; a >= 0; a--)
			{
				free(array[a]);
			}
			free(array);
			return (NULL);
		}
	}

	for (a = 0; b < width; b++)
	{
		array[a][b] = 0;
	}
	return (array);
}
