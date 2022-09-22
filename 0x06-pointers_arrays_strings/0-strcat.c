# include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination of concat
 * @src: source of concat
 * Return: returns a string
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; (*(dest + i) = *(src + j)) != '\0'; i++, j++)
		;
	return (dest);
}
