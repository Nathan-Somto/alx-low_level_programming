# include "main.h"
/**
 * _strncat - works like the og function.
 * @dest: ...
 * @src: ...
 * @n: ....
 * Return: returns a string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; *(dest + i); i++)
	{
		;
	}
	for (j = 0; j < n && (*(dest + i) = *(src + j)); i++, j++)
	{
		;
	}
	*(dest + i) = '\0';
	return (dest);
}
