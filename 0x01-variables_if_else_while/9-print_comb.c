# include <stdio.h>
/**
 *  main - where program starts
 *  Description: print 0 to 9 with
 * comma and space
 *
 * Return: 0
*/
int main(void)
{
	int Number;

	for (Number = 48; Number <= 57; Number++)
	{
		putchar(Number);
		if (Number != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);

}
