#include <stdlib.h>



/**
* free_grid - a function that frees a 2 dimensional grid previously created
* @grid: 2d array
* @height: height
*/

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
