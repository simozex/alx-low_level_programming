#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_name - print name
 *@name: pointer char
 *@f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

#endif
