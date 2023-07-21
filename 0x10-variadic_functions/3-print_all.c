#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * selector - select and print
 * @x: char
 * @args: va_list
 * Return: empty
 */
int selector(char x, va_list args)
{
	char *d;

	switch (x)
	{
		case 'c':
			printf("%c", va_arg(args, int));
			return (0);
		case 'i':
			printf("%d", va_arg(args, int));
			return (0);
		case 'f':
			printf("%f", va_arg(args, double));
			return (0);
		case 's':
			d = va_arg(args, char *);
			if (d == NULL)
				d = "(nil)";
			printf("%s", d);

			return (0);

	}
	return (1);

}
/**
 *print_all - print all
 *@format: const
 *Return: empty
 */
void print_all(const char * const format, ...)
{
	int a;
	int b;
	int select = 0;
	va_list args;

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(args, format);

	a = 0;
	while (format[a] != '\0')
	{
		select = selector(format[a], args);
		b = 0;
		while (format[a + 1] != '\0' && b != 1 && select == 0)
		{
			printf(", ");
			b = 1;
		}
		a++;

	}

	printf("\n");

}
