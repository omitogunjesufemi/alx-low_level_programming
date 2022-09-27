#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char
 * @s: the pointer to a pointer
 * @to: a pointer to the value
 */
void set_string(char **s, char *to)
{
	printf("**s: %p\n", *s);
	printf("*to: %p\n", to);
}
