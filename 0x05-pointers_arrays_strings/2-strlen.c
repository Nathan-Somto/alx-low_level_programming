# include "main.h"
/**
 * _strlen - gets the length of a string
 * @s: the string passed
 * Return: returns the length
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;

	}
	return (count);
}
