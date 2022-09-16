# include "main.h"
/**
 * _isdigit - function to check if  a
 * character is a digit
 * @c: the character to be checked
 * Return: returns  1 or 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
