#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
*@argc: count
*@argv: argument
*Return: 0
*/

int main(int argc, char *argv[])
{
	int pos, total, chnge, ax;
	int coins[] = {25, 10, 5, 2, 1};

	pos = total = chnge = ax = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[pos] != '\0')
	{
		if (total >= coins[pos])
		{
			ax = (total / coins[pos]);
			chnge += ax;
			total -= coins[pos] * ax;
		}
		pos++;
	}

	printf("%d\n", chnge);
	return (0);
}
