# include "main.h"
# include <stdio.h>
/**
 * print_diagsums - ....
 * @a: ...
 * @size: ...
*/
void print_diagsums(int *a, int size)
{
	long int pdiagonal = 0;
	long int sdiagonal = 0;
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				pdiagonal += *(a + i * size + j);
			}
			if ((i + j) == (size - 1))
			{
				sdiagonal += *(a + i * size + j);
			}
		}

	}
	printf("%ld, %ld\n", pdiagonal, sdiagonal);
}
