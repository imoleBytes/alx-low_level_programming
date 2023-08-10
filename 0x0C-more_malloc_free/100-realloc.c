#include <stdlib.h>

/**
* _realloc -  Func reallocate a memory block
* @ptr: pointer
* @old_size: old
* @new_size: new
* Return: ptr
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *copy, *relloc;
	unsigned int i;

	if (ptr != NULL)
		copy = ptr;
	else
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	relloc = malloc(new_size);
	if (relloc == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(relloc + i) = copy[i];
	}
	free(ptr);

	return (relloc);
}
