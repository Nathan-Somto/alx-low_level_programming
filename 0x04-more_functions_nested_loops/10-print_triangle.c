# include "main.h"
/**
 * print_triangle - prints a triangle
 * of any length
 * @size: size of triangle
 * Return: returns nothing
*/
void print_triangle(int size)
{
	int tmp = size;
	int d = 1;
	int i;
	int j;

	if (tmp <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (1)
		{
			if (tmp > 0 && d <= size)
			{
				for (i = 0; i < tmp - 1; i++)
				{
					_putchar(' ');
				}
				for (j = 0; j < d; j++)
				{
					_putchar('#');
				}
				_putchar('\n');
				tmp -= 1;
				d += 1;
			}
			else
			{
				break;
			}
		}
	}
}
