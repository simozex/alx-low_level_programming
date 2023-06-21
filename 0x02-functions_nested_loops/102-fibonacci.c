#include <stdio.h>
/**
 *  main - ezazae
 *  Return: 0 if it
 */
int main(void)
{
	int k;
	
	for (k = 2; k < 52; k++)
	{
		int i;
		unsigned long a = 0;
		unsigned long b = 1;
		unsigned long sum = 0;

		for (i = 2; i <= k; i++)
		{
			sum = a + b;
			a = b;
			b = sum;
		}

		printf("%ld", sum);
		if (k != 51)
			printf(", ");
	}
	printf("\n");
	return (0);
}
