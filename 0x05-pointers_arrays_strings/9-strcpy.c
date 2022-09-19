# include  "main.h"
/**
 * _strcpy - copies the string
 * @dest: destination for copying
 * @src: source for copying
 * Return: returns a string
*/
char *_strcpy(char *dest, char *src)
{
	while (1)
	{
		*dest  = *src;
		if (*src == '\0')
		{
			*dest = *src;
			break;
		}
		*dest++;
		*src++;

	}
	return (dest);
}
