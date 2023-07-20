#include "function_pointers.h"
/**
 *array_iterator - exectute a function
 *@array: int
 *@size: size_t
 *@action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
