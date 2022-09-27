# include "main.h"
/**
 * _memset - .....
 * @s: ...
 * @b: ...
 * @n: ...
 * Return: ....
*/
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);



}
