# include  "main.h"
/**
 * _strcpy - copies the string
 * @dest: destination for copying
 * @src: source for copying
 * Return: returns a string
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		dest[i] = src[i];
		if (src[i] == 0)
		{
			dest[i] = src[i];
			break;
		}


		i++;


	}
	return (dest);
}
