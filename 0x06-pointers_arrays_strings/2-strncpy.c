# include "main.h"
/**
 *  _strncpy - works like the strncpy function
 * @dest: destination for the function
 * @src: source for the function
 * @n: number of items you want copied
 * Return:returns dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && (*(dest + i) = *(src + i)) != '\0'; i++)
		;
	return (dest);
}
