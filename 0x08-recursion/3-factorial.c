/**
 * factorial - a function that returns the factorial of a number
 * @n: the number
 * Return: factorial of the number, and -1 for errors
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
