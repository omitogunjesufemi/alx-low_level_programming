#include <stdio.h>
#include <string.h>
/**
 * set_string - sets the value of a pointer to a char
 * @s: the pointer to a pointer
 * @to: a pointer to the value
 */
void set_string(char **s, char *to)
{
	int to_count = 0;

	while (to[to_count] != '\0')
	{
		to_count++;
	}

	*s = *s - (to_count + 1);
}
