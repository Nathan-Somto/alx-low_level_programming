# include "main.h"
# include <stdio.h>
/**
 * puts_half - gets half of a string
 * @str: the string to be checked
*/
void puts_half(char *str)
{
	int count;
	int odd = (count + 1) / 2;
	int even = count / 2;
	int i;

	for (count = 0;  *str != '\0'; str++)
	{
		count++;
	}
	if (count % 2 == 0)
	{
		for (i = even;  i < count; i++)
		{
			printf("%c", *(str + i));
			printf("\n");
		}

	}
	else
	{
		for (i = odd; i < count; i++)
		{
			printf("%c", *(str + i));
			printf("\n");
		}
	}


}
