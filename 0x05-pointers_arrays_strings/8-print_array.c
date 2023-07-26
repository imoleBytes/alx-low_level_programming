#include "main.h"
#include <stdio.h>

/**
* print_array - prints the array individually
* @a: params
* @n: params
*/
void print_array(int *a, int n)
{
	int id = 0;

	for (; id < n; id++)
	{
		printf("%d", *(a + id));
		if (id != (n - 1))
			printf(", ");
	}
	printf("\n");
}
