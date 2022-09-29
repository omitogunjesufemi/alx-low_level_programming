#include <stdio.h>
#include <string.h>
/**
 * check - the helper function to check if palidrome
 * @p: first position of the string array
 * @r: last position of the string array
 * @length: length of the string
 * Return: 1 or 0
 */
int check(char *p, char *r, int length)
{
	if (*p != *r)
		return (0);

	if (r - p <= 1 && *r == *p)
		return (1);

	return (check(p + 1, r - 1, length));
}

/**
 * is_palindrome - checks if palindrome
 * @s: the string
 * Return: 1 if true, and 0 if false
 */
int is_palindrome(char *s)
{
	char *p;
	char *r;

	int len = strlen(s);

	p = s;
	r = s + len - 1;

	return (check(p, r, len));
}
