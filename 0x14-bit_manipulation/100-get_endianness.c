#include "main.h"

/**
* get_endianness - func to check the endianness.
* Return: 0 for big or -1 for little-endian
*/

int get_endianness(void)
{
	int number = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);
	return (0);
}
