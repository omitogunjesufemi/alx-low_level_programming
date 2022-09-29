/**
 * check - check if prime
 * @number: the number to check if prime
 * @factor: the factors to divide number by
 * @count: the number of times there is a perfect division
 * of number and factor
 * Return: 1 or 0
 */
int check(int number, int factor)
{
	if (number <= 1)
		return (0);

	if (number == 2 || number == 3)
		return (1);

	if (number % 2 == 0)
		return (0);

	if (number % factor && number ==  factor)
		return (1);

	if (factor >= number / 2)
	{
		return (1);
	}

	return (check(number, factor + 1));
}


/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: input integer
 * Return: 1 if prime, and 0 if not
 */
int is_prime_number(int n)
{
	return (check(n, 1));
}
