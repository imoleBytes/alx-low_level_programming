#include <stdio.h>
#include <stdlib.h>

/**
 * main - this func prints its own opcodes!
 * @ac: arg count
 * @av: arg list
 *
 * Return: 0
 */
int main(int ac, char *av[])
{
	int num_bytes
	int i;
	char *array;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(av[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}
	return (0);
}
