# include "main.h"
/**
 * print_last_digit - gets the last digit of
 * a number
 * @n: number to be checked
 * Return: returns the last digit
*/
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		n *= -1;
	}
	ld = n % 10;
	_putchar(ld + '0');
	return (ld);
}
