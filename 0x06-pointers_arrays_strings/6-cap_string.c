# include "main.h"
/**
 * cap_string - capitalizes the first letter
 * @s:  ...
 * Return: not void
 */
char *cap_string(char *s)
{
	char sep [] = { ' ', '\t', '\n', ',', ';', '!', '?', '"', '(', ')', '{', '}'};
	int i;
	int j;

	for (i = 0; *(s + i); i++)
	{
		if (i == 0 && (*(s + i) >= 'a' && *(s + i) <= 'z'))
		{
			*(s + i) -= 32;
		}
		for (j = 0; j < 13; j++)
			if (*(s + i) == sep[j])
			{
				if ((*(s + (i + 1)) >= 'a' && (*(s + (i + 1))) <= 'z'))
				{
					(*(s + ( i + 1))) -= 32;
					break;
				}
			}
	}
	return (s);
}
