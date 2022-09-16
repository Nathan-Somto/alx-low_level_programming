# include "main.h"
/**
 * print_diagonal - prints a diagonal of a specified length
 * @n: the length specified
 * Return: Returns nothing
*/
void print_diagonal(int n)
{
	int i = 0;
	int space;

	while (1)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		else if (i < n)
		{
			for (space = 0; space < i; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i += 1;

		}
		else
			break;
	}
}
