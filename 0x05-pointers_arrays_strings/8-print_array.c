# include "main.h"
/**
 *  print_array - prints the elements of
 *  an array using a given length
 *  @a: the array element
 *  @n : how many elements you want printed
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
	}
}
