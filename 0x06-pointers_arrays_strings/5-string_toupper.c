# include "main.h"
/**
 * string_toupper - converts a string to uppercase
 * @s: the string
 * Return: returns an uppercase version
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 32;
	return (s);

}
