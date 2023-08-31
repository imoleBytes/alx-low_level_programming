#include "main.h"

/**
* set_bit - This funct sets the value of a bit at a given index to 1.
* @n: A pointer to the bit.
* @index: The index to set the value at.
* Return: 1 OR -1 if error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
