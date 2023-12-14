#include "main.h"

/**
 * print_binary - print binary representation of a number
 *
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}

	print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
