#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	unsigned char *ptr = (unsigned char *)&i;

	return (*ptr == 1);
}
