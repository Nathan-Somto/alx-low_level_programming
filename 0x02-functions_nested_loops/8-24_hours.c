# include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * starting from 00:00 to 23:59
 * Return: returns nothing
*/
void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	for (i; i < 3; i++)
	{
		for (j; j < 4; j++)
		{
			for (k; k < 6; k++)
			{
				for (l; l < 10; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
