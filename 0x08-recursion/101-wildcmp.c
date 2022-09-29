#include <stdio.h>
#include <string.h>

/**
 * check - method for checking strings
 * @p1: string 1 beginning item
 * @p2: string 2 beginning item
 * @r1: string 1 end item
 * @r2: string 2 end item
 * @len2: length of string 2
 * @count: count
 * Return: int
 */
int check(char *p1, char *p2, char *r1, char *r2, int len2, int count)
{
	if (len2 == 1 && *p2 == '*')
		return (1);

	if (*p1 != *p2 && *r1 != *r2)
		return (0);

	if ((*p1 == *p2 || *p2 == '*') && (*r1 == *r2 || *r2 == '*'))
		return (1);

	return (check(p1 + 1, p2 + 1, r1 - 1, r2 - 1, len2, count + 1));
}

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if they can be considered identical, or 0 if otherwise
 */
int wildcmp(char *s1, char *s2)
{
	char *p1;
	char *r1;
	char *p2;
	char *r2;
	int len1, len2, count;

	p1 = s1;
	p2 = s2;
	len1 = strlen(s1);
	len2 = strlen(s2);
	r1 = s1 + len1 - 1;
	r2 = s2 + len2 - 1;
	count = 0;

	return (check(p1, p2, r1, r2, len2, count));
}
