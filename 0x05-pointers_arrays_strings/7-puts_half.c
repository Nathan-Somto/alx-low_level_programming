# include "main.h"
# include <stdio.h>
/**
 * puts_half - gets half of a string
 * @str: the string to be checked
*/
void puts_half(char *str)
{
	int count = 0;
	int odd;
	int even;
	int i;

	for (i = 0;  str[i] != 0; i++)
	{
		count++;
	}

	even = count / 2;
	odd = (count + 1) / 2;

	if (count % 2 == 0)
	{
		for (i = even;  i < count; i++)
		{
			printf("%c", str[i]);
		}
		printf("\n");
	}
	else
	{
		for (i = odd; i < count; i++)
		{
			printf("%c", str[i]);
		}
		printf("\n");
	}


}
