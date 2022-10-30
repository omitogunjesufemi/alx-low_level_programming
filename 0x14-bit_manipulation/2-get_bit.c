#include "main.h"

/**
 * get_bit - Returns the value of a bit in a given index
 * @n: the number
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n)
		return ((n & (1 << index)) >> index);
	else
		return (-1);
}
