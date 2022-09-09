# include <stdio.h>
/**
 * main - where program starts
 * Description: print all lowercase
 * alphabets apart from q and e
 *
 *  Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' &&  alphabet != 'e')
		{
			putchar(alphabet);
		}
	}
	return (0);
}
