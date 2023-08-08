#include <stdlib.h>

int stringlen(char *str)
{
	unsigned int i = 0;

	while (*(str+i) != '\0'){
		i++;
	}
	return (i);
}


char *argstostr(int ac, char **av)
{
	int i;
	char *dest;
	int lenghtOfDest;

	// get the lenght of each of the arguments, first argument not inclusive
	int sumOfLenght = 0;

	for (i = 1; i < ac; i++)
	{
		sumOfLenght += stringlen(av[i]);
	}
	lenghtOfDest = sumOfLenght + ac; // adding ac for \n on each argument + 1 '\0'

	dest = malloc(sizeof(char) * lenghtOfDest);

	// fill dest with each argument
	int j;
	int a = 0;

	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			dest[a] = av[i][j];
			a++;
			j++;
		}
		dest[a] = '\n';
		a++;		
	}

	return (dest);
}