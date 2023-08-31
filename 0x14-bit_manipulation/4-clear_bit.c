#include "main.h"

/**
* clear_bit - tis func sets the value of a bit at a stated index to 0.
* @n: A pointer to the number.
* @index: The index to set the value
* Return: 1 OR -1 if error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
