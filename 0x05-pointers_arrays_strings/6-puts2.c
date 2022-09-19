# include "main.h"
# include <stdio.h>
/**
 * puts2 - prints only the even numbered elements of a string
 * @str: string to be  used
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
