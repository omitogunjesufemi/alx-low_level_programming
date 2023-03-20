#include <stddef.h>
#include "main.h"

int compare(char *s1, char *s2, int n);

/**
 * _strstr - a function that locates a substring
 * @haystack: the main string
 * @needle: the pattern
 * Return: a pointer to the beginning byte of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int len_needle, len_hay;
	int result;
	int i;

	len_needle = _strlen(needle);
	len_hay = _strlen(haystack);

	/*printf("Length of needle: %d\n", len_needle);*/

	for (i = 0; i < len_hay; i++)
	{
		result = compare(haystack, needle, len_needle);
		/**
		 *printf("%s\n", haystack);
		 *printf("%s\n", needle);
		 *printf("Before: %p\n", haystack);
		 *printf("Result: %d\n", result);
		 *printf("Value of i: %d\n", i);
		 */

		if (result == 0)
		{
			return (haystack);
		}

		haystack++;
		/*printf("After: %p\n", haystack);*/
	}

	return (NULL);
}


/**
 * compare - compares two memory block character by character
 * @s1: pointer to the first memory block
 * @s2: pointer to the second memory block
 * @n: size of bytes to check
 * Return: int
 */
int compare(char *s1, char *s2, int n)
{
	int i;
	int result = 0;

	for (i = 0; i < n ; i++)
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			return (result);
		}
		else
		{
			result = 0;
		}
	}

	return (result);
}
