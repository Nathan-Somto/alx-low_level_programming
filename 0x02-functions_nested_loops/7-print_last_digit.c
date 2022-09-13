# include "main.h"
/**
 * print_last_digit - gets the last digit of
 * a number
 * @n: number to be checked
 * Return: returns the last digit
*/
int print_last_digit(int n)
{
	if (n < 0)
		return ((-1 * n) % 10);

	else
		return (n % 10);
}
