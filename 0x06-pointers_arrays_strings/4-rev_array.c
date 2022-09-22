# include "main.h"
/**
 *  reverse_array - reverses the content of an array
 *  @a: the array passed in
 *  @n: the size of the array
 *  Return: returns nothing
*/
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = tmp;
		n--;
	}
}
