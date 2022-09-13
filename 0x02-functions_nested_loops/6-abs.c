# include "main.h"
/**
 * _abs - finds the absolute
 * value of a number
 * @n: number that is used
 * Return: returns a positive number
*/
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
