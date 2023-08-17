#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
* print_strings - func to print all args
* @separator: const char pointer
* @n: int
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strrs;
	unsigned int i;
	char *temp;

	va_start(strrs, n);

	for (i = 0; i < n; i++)
	{
		strrs = va_arg(strrs, char *);
		if (temp)
		{
			printf("%s", temp);
		}
		else
		{
			printf("(nil)");
		}

		if (separator && i < (n - 1))
			printf("%s", separator);
	};
	printf("\n");

	va_end(strrs);
}
