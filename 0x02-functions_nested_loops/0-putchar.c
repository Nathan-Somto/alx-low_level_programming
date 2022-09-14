# include "main.h"
/**
 *  main - where the program start
 *  Return: returns 0
*/
int main(void)
{

	char *var = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(var[i]);
	}
	_putchar('\n');
	return (0);
}
