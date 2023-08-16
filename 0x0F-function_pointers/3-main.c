#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>


/**
* main - func start here
* @argc: arg count
* @argv: arra of args
* Return: 0
*/
int main(int argc, char *argv[])
{
	int num1, num2, res;
	char op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op = *argv[2];

	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(argv[2]);

	res = func(num1, num2);
	printf("%d\n", res);

	return (0);
}
