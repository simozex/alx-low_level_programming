#include "main.h"

/**
*_isupper - function checks uppercase*
* @c: input
* Return: return 1 if 'c' is uppercase otherwise return 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
