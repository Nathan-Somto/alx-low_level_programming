# include "main.h"
# include <stdio.h>
# include<stdlib.h>
/**
 * rev_string - returns a reversed string
 * @s: the reversed string
*/
void rev_string(char *s)
{
	int i;
	char tmp[1000];
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	int k = 0;
	for (j = i - 1; j >= 0; j++)
	{
		tmp[k] = s[j];
	}
	for (i = 0;  tmp[i] != '\0'; i++)
		s[i] = tmp[i];


}
