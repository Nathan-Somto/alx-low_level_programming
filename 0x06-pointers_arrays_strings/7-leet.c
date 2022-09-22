# include "main.h"
/**
 * leet - converts a string to leet code
 * @s: the string
 * Return: returns the string
*/
char *leet(char *s)
{
	int i;
	char Lower[] = {'a', 'e', 'o', 't', 'l'};
	char Upper[]  = {'A', 'E', 'O', 'T', 'L'};
	int code[] = {4, 3, 0, 7, 1};
	int j;

	for (j = 0; *(s + j) != '\0'; j++)
		for (i = 0; i < 5; i++)
		{
			if (*(s + j) == Lower[i] || *(s + j) == Upper[i])
				*(s + j) = code[i] + '0';
		}
	return (s);
}
