#include "main.h"

/**
* get_bit - func gets the value of a bit at a stated index.
* @n: The number.
* @index: The index to get the value at - indices start at 0.
*
* Return: The value of bit at the index OR -1 if error.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
