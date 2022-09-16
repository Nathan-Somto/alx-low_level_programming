# include "main.h"
/**
 *  _isupper - checks is a character is uppercase
 *  @c: character to be checked
 *  Return: returns 0 or -1
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
