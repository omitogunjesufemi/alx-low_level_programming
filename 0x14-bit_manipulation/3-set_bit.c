#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: the index, starting from 0 of the bit you want to set
 * Return: the index, starting from 0 of the bit you want to set
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n && index <= 31)
	{
		*n = *n | (1 << index);
		return (1);
	}
	else
		return (-1);
}
