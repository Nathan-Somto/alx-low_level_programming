# include "main.h"
/**
 * _puts - a version of the puts function
 * @str: the string to be printed
*/
void _puts(char *str)
{
	while (1)
	{
		if (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
		else
		{
			_putchar('\n');
			break;
		}
	}
}
