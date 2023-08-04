#include <stdlib.h>
#include <stdio.h>

/**
* main - main funtion to prints the multiplication of two integers
* @argc: count
* @argv: argument
* Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);

		return (0);
	}
	printf("Error\n");
	return (1);
}
