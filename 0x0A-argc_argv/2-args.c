#include <stdio.h>

/**
* main - main funct
* @argc: Count
* @argv: arguments
* Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	int c = 0;

	if (argc > 0)
	{
		while (c < argc)
		{
			printf("%s\n", argv[c]);
			c++;
		}
	}
	return (0);
}
