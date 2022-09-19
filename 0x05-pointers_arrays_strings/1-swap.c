# include "main.h"
/**
 * swap_int - swaps the integer values of two parameters
 * @a: first parameter
 * @b: second parameter
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
