# include "main.h"
/**
 * _islower - checks if an alphabet
 * is lowercase
 * @c: character to be checked
 *
 * Return: it returns 1 if lowercase
 * , 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
