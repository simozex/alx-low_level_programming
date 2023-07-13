#include"main.h"
#include<stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	if (b == 0)
	return (NULL)i
	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
