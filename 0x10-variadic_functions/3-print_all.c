#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - func to prints all
 * @format: string
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	unsigned int i = 0, j, k = 0;
	char *_strings;
	const char argTypes[] = "cifs";

	va_start(arguments, format);
	while (format && format[i])
	{
		j = 0;
		while (argTypes[j])
		{
			if (format[i] == argTypes[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(arguments, int)), k = 1;
			break;
		case 'i':
			printf("%d", va_arg(arguments, int)), k = 1;
			break;
		case 'f':
			printf("%f", va_arg(arguments, double)), k = 1;
			break;
		case 's':
			_strings = va_arg(arguments, char *), k = 1;
			if (!_strings)
			{
				printf("(nil)");
				break;
			}
			printf("%s", _strings);
			break;
		} i++;
	}
	printf("\n"), va_end(arguments);
}
