#include "variadic_functions.h"
#include <stdio.h>

int str_len(const char * const s);
/**
 * print_all - prints anything
 * @format: the list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i, len;
	va_list arguments;
	char *ptr;

	va_start(arguments, format);
	i = 0;
	len = str_len(format);

	while (i < len)
	{

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(arguments, int));
			break;
		case 'i':
			printf("%d", va_arg(arguments, int));
			break;
		case 'f':
			printf("%f", va_arg(arguments, double));
			break;
		case 's':
			ptr = va_arg(arguments, char *);
			if (ptr == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", ptr);
			break;
		default:
			break;
		}

		if ((i != len - 1) && (format[i] == 'c' || format[i] == 'i'
		     || format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}

	printf("\n");
}


/**
 * str_len - gets length of a string
 * @s: string
 * Return: length of string
 */
int str_len(const char * const s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
