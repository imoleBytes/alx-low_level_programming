


/**
* reverse_array - This func reverses the content of an array of integers
* @a: an array of integers
* @n: number of elements in the array
*/

void reverse_array(int *a, int n)
{
	int *starting_c, *ending_c, c;
	int i;

	starting_c = a;
	ending_c = a;

	for (i = 0; i < n - 1; i++)
	{
		ending_c++;
	}

	for (i = 0; i < n / 2; i++)
	{
		c = *ending_c;
		*ending_c = *starting_c;
		*starting_c = c;
		starting_c++;
		ending_c--;
	}
}
