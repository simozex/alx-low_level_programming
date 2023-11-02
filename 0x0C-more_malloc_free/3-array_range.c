#include "main.h"
#include <stdlib.h>

/*Red-Rim*/
/**
 * array_range - Write a function that creates an array of integers
 * @max: max int
 * @min: starting int
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
