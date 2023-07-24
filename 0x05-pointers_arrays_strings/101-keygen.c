#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - to generate a keygen.
 * Return: 0
 */
int main(void)
{
	int m = 0, j = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (j < 2772)
	{
		m = rand() % 128;
		if ((j + m) > 2772)
			break;
		j += m;
		printf("%c", m);
	}
	printf("%c\n", (2772 - j));
	return (0);
}
