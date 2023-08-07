#include <stdlib.h>



/**
* _strdup - func to create a block of memmory and fill it with string
* @str: array size
* Return: a pointer to array
*/

char *_strdup(char *str)
{

	char *array;
	int i = 0;


	array = malloc(sizeof(*str));

	if (array != NULL)
	{
		/*for (i = 0; i < size; i++)*/
		while (str[i] != '\0')
		{
			array[i] = str[i];
		}

		return (array);
	}

	return (NULL);
}
