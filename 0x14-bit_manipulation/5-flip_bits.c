#include "main.h"

/**
 * count_set_bits - Count the number of bits set
 *
 * @n: The unsigned long integer whose bit count is to be determined
 *
 * Return: The number of bits needed to represent n
 */
int count_set_bits(unsigned long int n)
{
	int count = 0;

	while (n > 0)
	{
		count += (n & 1);
		n >>= 1;
	}
	return (count);
}

/**
 * flip_bits - unction that returns the number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: number 1
 * @m: number 2
 *
 * Return: the number of times
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_set_bits(n ^ m));
}
