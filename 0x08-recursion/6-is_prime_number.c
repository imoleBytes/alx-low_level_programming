
/**
 * _prim - fuc to check number for prime
 * @n: number to be checked.
 * @i: count.
 *
 * Return: int.
 */

int _prim(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}

	return (_prim(n, i + 1));
}

/**
 * is_prime_number - function to check prime number
 * @n: number to be checked
 * Return: 1 if prime number, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (_prim(n, 2));
}
