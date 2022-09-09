# include <stdio.h>
/**
 *  main - where program starts
 *  Description: prints out lowercase
 * letters in ascii
 * table using
 * numbers 97 to 122 check
 *  ascii table for  reference using putchar
 *  to generate the output
 *  Return: 0
*/
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
