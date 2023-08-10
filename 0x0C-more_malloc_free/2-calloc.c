#include <stdlib.h>

/**
* _memset - this func copies char
* @s: str
* @b: char to copy
* @n: no of bytes to fill
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

/**
* _calloc - this allocates memory for an array.
* @nmemb: number of elements
* @size: no of bytes
* Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, (nmemb * size));
	return (ptr);
}
