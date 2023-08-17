#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - func to print all args
* @separator: const char pointer
* @n: int
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (separator && i < n-1)
			printf("%s", separator);
	};
	printf("\n");

	va_end(numbers);

}
