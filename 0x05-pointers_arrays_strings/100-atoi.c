# include "main.h"
/**
 * _atoi - converts string to an integer
 * @s: the string
 * Return: returns the number
*/
int _atoi(char *s)
{
	int i ;
	int j;
	int num = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = 0; j < i; j++)
	{
		if(s[j] >= '0' && s[j] <= '9')
			num = num * 10 + (s[j] - '0');

	}
	if (s[0] == '-')
		num *= -1;
	if (num == 0)
		return 0;
	return num;
}
