# include "main.h"
# include <stdio.h>
/**
 * puts2 - prints only the even numbered elements of a string
 * @str: string to be  used
*/
void puts2(char *str)
{
	int count;
	int i;

	for (count = 0;  *str != '\0'; str++)
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		if ((i % 2 == 0) && (*(str + i) != 0))
		{
			printf("%c", *(str + i));
		}
	}
	printf("\n");
}
