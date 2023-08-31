#include "main.h"

/**
* binary_to__u_intnt - function converts binary num to unsigned int.
* @b: binary
* Return: unsigned int.
*/

unsigned int binary_to__u_intnt(const char *b)
{
	unsigned int _u_int;
	int num_chars;
	int b_two;

	if (!b)
		return (0);

	_u_int = 0;

	for (num_chars = 0; b[num_chars] != '\0'; num_chars++)
		;

	for (num_chars--, b_two = 1; num_chars >= 0; num_chars--, b_two *= 2)
	{
		if (b[num_chars] != '0' && b[num_chars] != '1')
		{
			return (0);
		}

		if (b[num_chars] & 1)
		{
			_u_int += b_two;
		}
	}

	return (_u_int);
}
