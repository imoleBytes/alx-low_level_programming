#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Generates a keygen.
* Return: 0
*/

int main(void)
{
	int id = 0, j = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (j < 2772)
	{
		id = rand() % 128;
		if ((j + id) > 2772)
			break;
		j += id;
		printf("%c", id);
	}
	printf("%c\n", (2772 - j));
	return (0);
}
