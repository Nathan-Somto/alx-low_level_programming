# include "main.h"
# include <stdio.h>
/**
 * puts2 - prints only the even numbered elements of a string
 * @str: string to be  used
*/
void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; *str++)
	{
		printf("%c", str[i]);
		i += 2;
	}
	printf("\n");
}
