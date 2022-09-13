#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character value
 * Return: int 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
