#include <stdlib.h>
/**
*malloc_checked - this func return array of str
*@b: int (memory)
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
