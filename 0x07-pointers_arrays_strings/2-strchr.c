# include "main.h"
/**
 * _strchr - ...
 * @s: ...
 * @c: ...
 * Return: character
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; 1; i++)
	{
		if (*(s + i) == c)
			return (s + i);
		if (*(s + i) == '\0')
			return (NULL);
	}
}
