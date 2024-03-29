#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - func to print all args
* @separator: const char pointer
* @n: int
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings_;
	unsigned int i;
	char *temp;

	va_start(strings_, n);

	for (i = 0; i < n; i++)
	{
		temp = va_arg(strings_, char *);

		if (temp)
			printf("%s", temp);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(strings_);
}
