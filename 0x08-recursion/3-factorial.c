/**
* factorial - func to return the factorial of an int
* @n: an int
* Return: int
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
