#include "main.h"
#include <stdio.h>
/**
 *  print_times_table - hieheieei
 *  @n: is amonster
 */
void print_times_table(int n)
{
	int i, j;
	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j != 0)
					printf("%3d", i * j);
				else
					printf("0");

				if (j != n)
					printf(", ");
			}
			printf("\n");
		}
	}
}
