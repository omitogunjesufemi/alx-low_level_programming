/**
 * check - check if prime
 * @number: the number to check if prime
 * @factor: the factors to divide number by
 * @count: the number of times there is a perfect division
 * of number and factor
 * Return: 1 or 0
 */
int check(int number, int factor, int count)
{
	if (number <= 1)
		return (0);

	if (number % 2 == 0)
		return (0);

	if (number % factor == 0)
	{
		count++;

		if (count == 2)
			return (1);
	}

	return (check(number, factor + 1, count));
}


/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: input integer
 * Return: 1 if prime, and 0 if not
 */
int is_prime_number(int n)
{
	return (check(n, 1, 0));
}
