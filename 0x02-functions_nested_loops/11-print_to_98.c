# include "main.h"
# include <stdio.h>
/**
 * print_to_98 - from any given number
 *  print  to 98
 *  @n: the number
 *  Return: returns nothing
*/
void print_to_98(int n)
{
	int i;
	int num;

	if (n < 98)
	{
		for (i = n; n <= 98 ; n++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n; i <= 98; n--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}


		}

		printf("\n");
	}
}
