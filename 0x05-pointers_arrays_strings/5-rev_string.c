# include "main.h"
# include <stdio.h>
/**
 * rev_string - returns a reversed string
 * @s: the reversed string
*/
void rev_string(char *s)
{
	int i;
	char tmp[];
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	for (j = i - 1; j >= 0; j++)
		tmp = s[j];
	for (i = 0;  tmp[i] != '\0'; i++)
		s[i] = tmp[i];


}
