# include <stdio.h>
/**
 * main - where program starts
 * Description: prints various sizes of c data types
 * Return: 0
*/
int main(void)
{
	char character;
	int integer;
	long int l_integer;
	long long int l_l_integer;
	float float_var;

	printf("Size of a char: %ld byte(s)\n", sizeof(character));
	printf("Size of an int: %ld byte(s)\n", sizeof(integer));
	printf("Size of a long int: %ld byte(s)\n", sizeof(l_integer));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(l_l_integer));
	printf("Size of a float: %ld byte(s)\n", sizeof(float_var));

	return (0);
}
