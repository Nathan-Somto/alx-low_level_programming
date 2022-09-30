# include <stdio.h>
# include <stdlib.h>
/**
 * main - ....
 * @argc: ...
 * @argv: ...
 * Return: ...
*/
int main(int argc, char **argv)
{
	int product = 1;
	int i;
	int value;

	for (i = 1; i <= 2; i++)
	{
		if (argv[i] == '\0')
		{
			printf("Error\n");
			return (1);
		}
		value = atoi(argv[i]);
		product *= value;
	}
	printf("%d\n", product);
	return (0);

}
