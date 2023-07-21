#include <stdarg.h>
/**
 *sum_them_all - sums all arguments
 *@n: int
 * Return: suma
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int suma;
	va_list list;

	va_start(list, n);
	for (i = 0, suma = 0; i < n; i++)
		suma += va_arg(list, int);

	va_end(list);
	return (suma);

	if (n == 0)
		return (0);
}
