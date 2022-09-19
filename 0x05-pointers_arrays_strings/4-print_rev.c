# include "main.h"
# include <stdio.h>
/**
 * print_rev - prints the reverse of a string
 * @s: the string reversed
*/
void print_rev(char *s)
{

	int i;
	int j;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	for (j = i - 1;  j >= 0; j--)
	{
		printf("%c", s[j]);
	}

	printf("\n");
}
