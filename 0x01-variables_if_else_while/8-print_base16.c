# include <stdio.h>
/**
 *  main - where program starts
 *  Description: print
 * hexadecimal numbers
 * from 0 to f
 *  Return: 0
*/
int main(void)
{
	int i;
	char alphabet;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
