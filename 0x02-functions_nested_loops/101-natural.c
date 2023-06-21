#include "main.h"
#include <stdio.h>
/**
 *  main - zeaazeaeaeaea
 *  Return: 0, wa bla bla
 */
int main(void)
{
	int k;
	int sum = 0;

	for (k = 0; k < 1024; k++)
	{
		if (k % 3 == 0 || k % 5 == 0)
		{
			sum += k;
		}
	}
	printf("%d\n", sum);

	return (0);
}
