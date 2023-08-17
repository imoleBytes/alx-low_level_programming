#include <stdarg.h>

/**
* sum_them_all - func to sum all argument
* @n: const int
* Return: int sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}

	va_end(numbers);

	return (sum);
}
