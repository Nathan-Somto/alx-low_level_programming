# include <stdio.h>
/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: ...
*/
int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
}