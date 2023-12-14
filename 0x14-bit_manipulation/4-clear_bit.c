#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int dummy = 1UL;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & (~(dummy << index));
	return (1);
}
