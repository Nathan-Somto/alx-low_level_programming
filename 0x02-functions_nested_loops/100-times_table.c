# include "main.h"
/**
 * print_times_table - function to print n times table
 * @n: the number
*/
void print_times_table( int n)
{
    int i;
    int j;

    if ( n > 0 && n <= 15)
    {
	    for (i = 0; i <= n ; i++)
    {
	    for (j = 0; j <= n ; j++)
        {
		if (i * j == 0)
		{
			_putchar((i * j) +'0');
			if(j != n )
                {
		       	_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
                }
            }
		else if ( i* j >= 100)
		{
			_putchar((i * j) / 100 +'0'); 
			_putchar(((i * j) / 10) % 10 + '0');
			_putchar((i * j) % 10 + '0');
			if(j != n)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		else if (i * j >= 10 && i * j < 100)
		{
			_putchar((i * j) / 10 + '0');
			_putchar((i * j) % 10 + '0');
			if (j != n )
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		else if ( i > 0 && j < 10 )
		{

			_putchar(i * j + '0');
			if(j != n)
			{ 
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
            }
	}
	    _putchar("\n");
    }
    }
}
