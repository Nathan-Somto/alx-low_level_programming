# include "main.h"
# include <limits.h>
/**
 * print_last_digit - gets the last digit of
 * a number
 * @n: number to be checked
 * Return: returns the last digit
*/
int print_last_digit(int n)
{
	int ld;

	if (n == INT_MIN)
	{
		ld = -(n % 10);
	}
	else if (n < 0)
	{
		n *= -1;
	}

	if (n != INT_MIN)
	{
		ld = n % 10;
	}
	_putchar(ld + '0');
	return (ld);
}
