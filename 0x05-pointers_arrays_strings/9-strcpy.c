#include "main.h"

/**
* _strcpy - this one copies string
* @dest: pointer
* @src: pointer
* Return: char
*/

char *_strcpy(char *dest, char *src)
{
	int id;

	for (id = 0; *(src + id) != '\0'; id++)
	{
		dest[id] = *(src + id);
	}
	dest[i] = '\0';

	return (dest);
}
