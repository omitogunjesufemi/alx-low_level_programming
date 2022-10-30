#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k, F;
	int count, position, bit_value;

	k = n ^ m;
	F = 1;
	count = 0;
	position = 0;
	while (F != 0)
	{
		bit_value = (k & (1 << position)) >> position;
		if (bit_value != 0)
			count++;
		position++;
		F = F << 1;
	}
	return (count);
}
